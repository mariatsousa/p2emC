/*Fac¸a um programa que armazene em um registro de dados (estrutura composta) os da-
dos de um funcionario de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, ´
Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de ´
ate 30 caracteres) e Sal ´ ario. Os dados devem ser digitados pelo usu ´ ario, armazenados ´
na estrutura e exibidos na tela.*/

#include <stdio.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    char nome[50];
    int idade;
    char sexo;
    char cpf[12];
    Data data;
    int setor;
    char cargo[30];
    float salario;
} Funcionario;

int main(){
    Funcionario f;

    printf("Registro: \n");
    printf(" - Nome: ");
    fgets(f.nome, sizeof(f.nome), stdin);
    f.nome[strlen(f.nome) - 1] = '\0';
    printf(" - Idade: ");
    scanf("%d", &f.idade);
    getchar();
    do{
        printf(" - Sexo (F/M): ");
        scanf("%c", &f.sexo);
    } while(f.sexo != 'F' && f.sexo != 'M' && f.sexo != 'f' && f.sexo != 'm');
    printf(" - CPF: ");
    scanf("%11s", f.cpf);
    printf(" - Data de nascimento: \n");
    printf("     Dia: ");
    scanf("%d", &f.data.dia);
    printf("     Mes: ");
    scanf("%d", &f.data.mes);
    printf("     Ano: ");
    scanf("%d", &f.data.ano);
    do{
        printf(" - Codigo do setor: ");
        scanf("%d", &f.setor);
    } while(f.setor < 0 || f.setor > 99);
    getchar();
    printf(" - Cargo: ");
    fgets(f.cargo, sizeof(f.cargo), stdin);
    f.cargo[strlen(f.cargo) - 1] = '\0';
    printf(" - Salario: ");
    scanf("%f", &f.salario);

    printf("\n\nNome: %s \nIdade: %d", f.nome, f.idade);
    if(f.sexo == 'F' || f.sexo == 'f'){
        printf("\nSexo: Feminino");
    }else{
        printf("\nSexo: Masculino");
    }
    printf("\nCPF: %s \nData de nascimento: %d/%d/%d", f.cpf, f.data.dia, f.data.mes, f.data.ano);
    printf("\nCodigo do setor: %d \nCargo: %s \nSalario: %.2f \n", f.setor, f.cargo, f.salario);

    return 0;
}