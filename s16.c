/*Fac¸a um programa que seja uma agenda de compromissos e:
• Crie e leia um vetor de 5 estruturas de dados com: compromisso (maximo 60 letras) ´
e data. A data deve ser outra estrutura de dados contendo dia, mes e ano. ˆ
• Leia dois inteiros M e A e mostre todos os compromissos do mesˆ M do ano A.
Repita o procedimento ate ler ´ M = 0.*/

#include <stdio.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    char compromisso[60];
    Data data;
} Agenda;

void mes(int);

int main(){
    int m, a;
    Agenda v[5];

    for(int i = 0; i < 5; i++){
        printf("Compromisso: ");
        fgets(v[i].compromisso, sizeof(v[i].compromisso), stdin);
        v[i].compromisso[strlen(v[i].compromisso) - 1] = '\0';
        printf("Data: \n");
        printf("  Dia: ");
        scanf("%d", &v[i].data.dia);
        printf("  Mes: ");
        scanf("%d", &v[i].data.mes);
        printf("  Ano: ");
        scanf("%d", &v[i].data.ano);
        getchar();
        printf("\n");
    }

    printf("\n\nInsira o mes que deseja buscar: ");
    scanf("%d", &m);
    printf("Insira o ano: ");
    scanf("%d", &a);

    int cont = 0;
    
    printf("\n\nAgenda de ");
    mes(m);
    printf(" de %d \n", a);

    for(int i = 0; i < 5; i++){
        if(v[i].data.mes == m && v[i].data.ano == a){
            printf("%d/%d/%d - %s \n", v[i].data.dia, v[i].data.mes, v[i].data.ano, v[i].compromisso);
            cont++;
        }
    }

    if(cont == 0){
        printf("Sem compromissos nesse mes. \n");
    }

    return 0;
}

void mes(int n){
    if(n == 1){
        printf("Janeiro");
    }else if(n == 2){
        printf("Fevereiro");
    }else if(n == 3){
        printf("Marco");
    }else if(n == 4){
        printf("Abril");
    }else if(n == 5){
        printf("Maio");
    }else if(n == 6){
        printf("Junho");
    }else if(n == 7){
        printf("Julho");
    }else if(n == 8){
        printf("Agosto");
    }else if(n == 9){
        printf("Setembro");
    }else if(n == 10){
        printf("Outubro");
    }else if(n == 11){
        printf("Novembro");
    }else{
        printf("Dezembro");
    }
}