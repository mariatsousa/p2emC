#include <stdio.h>
#include <string.h>

typedef struct{
    char rua[50];
    int numero;
    char complemento[70];
    char bairro[30];
    int cep;
    char cidade[40];
    char estado[30];
    char pais[30];
}Endereco;

typedef struct{
    int ddd;
    int numero;
}Telefone;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[80];
    char email[80];
    Endereco end;
    Telefone tel;
    Data nasc;
    char obs[80];
}Pessoa;

void menu();
void imprimePessoa(Pessoa agenda[], int i);
void buscaNome(Pessoa agenda[], int n, char nome[]);
void buscaMes(Pessoa agenda[], int n, int mes);
void buscaDiaMes(Pessoa agenda[], int n, int dia, int mes);
void inserir(Pessoa agenda[], int *i);
void deletar(Pessoa agenda[], int *n, char nome[]);
void imprimirParte(Pessoa agenda[], int n);
void imprimirTudo(Pessoa agenda[], int n);

int main(){
    Pessoa agenda[100];
    int op, n = 0;

    do{
        menu();
        scanf("%d", &op);
        getchar();

        switch (op)
        {
        case 1:
            char nome[80];
            printf("\n\nNome: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strlen(nome) - 1] = '\0';

            printf("\nResultado: \n");
            buscaNome(agenda, n, nome);
            break;

        case 2:
            int mes;

            printf("\n\nMes: ");
            scanf("%d", &mes);

            printf("\nResultado: \n");
            buscaMes(agenda, n, mes);
            break;

        case 3:
            int dia;
            printf("Dia: ");
            scanf("%d", &dia);
            printf("Mes: ");
            scanf("%d", &mes);

            printf("\nResultado: \n");
            buscaDiaMes(agenda, n, dia, mes);
            break;

        case 4:
            inserir(agenda, &n);
            break;

        case 5:
            printf("Nome: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strlen(nome) - 1] = '\0';

            deletar(agenda, &n, nome);
            break;

        case 6:
            imprimirParte(agenda, n);
            break;

        case 7:
            imprimirTudo(agenda, n);
            break;

        default:
            break;
        }

        
    }while(op != 8);

    return 0;
}

void menu(){
    printf("\nMenu: \n");
    printf(" 1 - Buscar por nome \n");
    printf(" 2 - Buscar por mes de aniversario \n");
    printf(" 3 - Buscar por mes e dia de aniversario \n");
    printf(" 4 - Inserir pessoa \n");
    printf(" 5 - Deletar pessoa \n");
    printf(" 6 - Imprimir nome, email e telefone \n");
    printf(" 7 - Imprimir todos os dados \n");
    printf(" 8 - Fechar \n");
    printf("Opcao: ");
}

void imprimePessoa(Pessoa agenda[], int i){
    printf("\nNome: %s \n", agenda[i].nome);
    printf("Email: %s \n", agenda[i].email);
    printf("Endereco: %s, %d - %s \n %s \n %s - %s - %s \n %d \n"
            , agenda[i].end.rua, agenda[i].end.numero, agenda[i].end.complemento
            , agenda[i].end.bairro, agenda[i].end.cidade, agenda[i].end.estado
            , agenda[i].end.pais, agenda[i].end.cep);
    printf("Telefone: %d %d \n", agenda[i].tel.ddd, agenda[i].tel.numero);
    printf("Data de Nascimento: %d/%d/%d \n"
            , agenda[i].nasc.dia, agenda[i].nasc.mes, agenda[i].nasc.ano);
    if(agenda[i].obs[0] != '\0'){
        printf("Observacao: %s \n", agenda[i].obs);
    }
}

void buscaNome(Pessoa agenda[], int n, char nome[]){
    int cond = 0;

    for(int i = 0; i < n; i++){

        int match = 1;
        char l1, l2;

        for(int j = 0; ; j++){

            l1 = agenda[i].nome[j];
            l2 = nome[j];

            if(l1 >= 'A' && l1 <= 'Z') l1 += 32;
            if(l2 >= 'A' && l2 <= 'Z') l2 += 32;

            if(l2 == '\0'){
                break;
            }

            if(l1 != l2){
                match = 0;
                break;
            }

            if(l1 == '\0'){
                match = 0;
                break;
            }
        }

        if(match){
            cond++;
            imprimePessoa(agenda, i);
        }
    }

    if(cond == 0){
        printf("Nenhuma pessoa encontrada com esse nome.\n");
    }
}

void buscaMes(Pessoa agenda[], int n, int mes){
    int cond = 0;

    if(n == 0){
        printf("Agenda vazia!");
    }else{      
        for(int i = 0; i < n; i++){
            if(agenda[i].nasc.mes == mes){
                cond++;
                imprimePessoa(agenda, i);
            }
        }
    }

    if(cond == 0){
        printf("Nenhuma pessoa nascida nesse mes. \n");
    }
}


void buscaDiaMes(Pessoa agenda[], int n, int dia, int mes){
    int cond = 0;

    if(n == 0){
        printf("Agenda vazia!");
    }else{      
        for(int i = 0; i < n; i++){
            if(agenda[i].nasc.mes == mes && agenda[i].nasc.dia == dia){
                cond++;
                imprimePessoa(agenda, i);
            }
        }
    }

    if(cond == 0){
        printf("Nenhuma pessoa nascida nesse mes e nesse dia. \n");
    }
}

void inserir(Pessoa agenda[], int *i){
    printf("\nNome: ");
    fgets(agenda[*i].nome, sizeof(agenda[*i].nome), stdin);
    agenda[*i].nome[strlen(agenda[*i].nome) - 1] = '\0';
    printf("Email:");
    fgets(agenda[*i].email, sizeof(agenda[*i].email), stdin);
    agenda[*i].email[strlen(agenda[*i].email) - 1] = '\0';
    printf("Endereco \n");
    printf(" Rua: ");
    fgets(agenda[*i].end.rua, sizeof(agenda[*i].end.rua), stdin);
    agenda[*i].end.rua[strlen(agenda[*i].end.rua) - 1] = '\0';
    printf(" Numero: ");
    scanf("%d", &agenda[*i].end.numero);
    getchar();
    printf(" Complemento: ");
    fgets(agenda[*i].end.complemento, sizeof(agenda[*i].end.complemento), stdin);
    agenda[*i].end.complemento[strlen(agenda[*i].end.complemento) - 1] = '\0';
    printf(" Bairro: ");
    fgets(agenda[*i].end.bairro, sizeof(agenda[*i].end.bairro), stdin);
    agenda[*i].end.bairro[strlen(agenda[*i].end.bairro) - 1] = '\0';
    printf(" Cidade: ");
    fgets(agenda[*i].end.cidade, sizeof(agenda[*i].end.cidade), stdin);
    agenda[*i].end.cidade[strlen(agenda[*i].end.cidade) - 1] = '\0';
    printf(" Estado: ");
    fgets(agenda[*i].end.estado, sizeof(agenda[*i].end.estado), stdin);
    agenda[*i].end.estado[strlen(agenda[*i].end.estado) - 1] = '\0';
    printf(" Pais: ");
    fgets(agenda[*i].end.pais, sizeof(agenda[*i].end.pais), stdin);
    agenda[*i].end.pais[strlen(agenda[*i].end.pais) - 1] = '\0';
    printf(" CEP: ");
    scanf("%d", &agenda[*i].end.cep);
    printf("Telefone \n");
    printf(" DDD: ");
    scanf("%d", &agenda[*i].tel.ddd);
    printf(" Numero: ");
    scanf("%d", &agenda[*i].tel.numero);
    printf("Data de Nascimento \n");
    printf(" Dia: ");
    scanf("%d", &agenda[*i].nasc.dia);
    printf(" Mes: ");
    scanf("%d", &agenda[*i].nasc.mes);
    printf(" Ano: ");
    scanf("%d", &agenda[*i].nasc.ano);
    getchar();
    printf("Observacao: ");
    fgets(agenda[*i].obs, sizeof(agenda[*i].obs), stdin);
    agenda[*i].obs[strlen(agenda[*i].obs) - 1] = '\0';

    Pessoa temp;
    int cond = 0;

    for(int n = 0; n < *i; n++){
        if(strcmp(agenda[*i].nome, agenda[n]. nome) > 0){
            temp = agenda[n];
            agenda[n] = agenda[*i];
            agenda[*i] = temp;
        }
    }

    (*i)++;
}

void deletar(Pessoa agenda[], int *n, char nome[]){
        for(int i = 0; i < *n; i++){
            if(strcmp(agenda[i].nome, nome) == 0){
                for(int j = i; j < *n - 1; j++){
                agenda[j] = agenda[j + 1];
            }
            (*n)--;
            i--; 
        }
    }
}

void imprimirParte(Pessoa agenda[], int n){
    for(int i = 0; i < n; i++){
        printf("\nNome: %s \n", agenda[i].nome);
        printf("Email: %s \n", agenda[i].email);
        printf("Telefone: %d %d \n", agenda[i].tel.ddd, agenda[i].tel.numero);
    }
}

void imprimirTudo(Pessoa agenda[], int n){
    for(int i = 0; i < n; i++){
        imprimePessoa(agenda, i);
    }
}