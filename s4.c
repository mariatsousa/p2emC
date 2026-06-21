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

float media(Aluno);

void status(Aluno, float);

int main(){
    Aluno a[5];

    for(int i = 0; i < 5; i++){
        printf("Aluno %d \n", i + 1);
        printf(" - RA: ");
        scanf("%d", &a[i].ra);
        getchar();
        printf(" - Nome: ");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        a[i].nome[strlen(a[i].nome) - 1] = '\0';
        for(int j = 0; j < 3; j++){
            printf(" - Nota prova %d: ", j + 1);
            scanf("%f", &a[i].notas[j]);
        }
    }

    float maior, menor, p1;

    for(int i = 0; i < 5; i++){
        float x = media(a[i]);
        if(i == 0){
            maior = x;
            menor = x;
            p1 = a[i].notas[0];
        }else{
            if(p1 < a[i].notas[0]){
                p1 = a[i].notas[0];
            }
            if(maior < x){
                maior = x;
            }
            if(menor > x){
                menor = x;
            }
        }

        status(a[i], x);
    }

    printf("\n\nMaior media: %.1f", maior);
    printf("\nMenor media: %.1f", menor);
    printf("\nMaior nota na prova 1: %.1f \n", p1);

    return 0;
}

float media(Aluno a){
    return (a.notas[0] + a.notas[1] + a.notas[2]) / 3;
}

void status(Aluno a, float media){
    if (media >= 6){
        printf("\n%s foi aprovado!", a.nome);
    }else{
        printf("\n%s foi reprovado.", a.nome);
    }
}