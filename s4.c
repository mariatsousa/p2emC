/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. ´
(d) Encontre o aluno com menor media geral ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovac¸ao. */

#include<stdio.h>
#include<string.h>

typedef struct {
    int ra;
    char nome[50];
    float notas[3];
}Aluno;

int

int main(){
    Aluno a[5];

    for(int i = 0; i < 5; i++){
        printf("Aluno %d \n", i + 1);
        printf(" - RA: ");
        scanf("%d", &a[i].ra);
        printf(" - Nome: ");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        for(int j = 0; j < 3; j++){
            printf("Nota prova %d: ", j + 1);
            scanf("%d", a[i].nota[j]);
        }
    }
}