/*Escreva uma func¸ao que dado um n ˜ umero real passado como par ´ ametro, retorne a parte ˆ
inteira e a parte fracionaria deste n ´ umero. Escreva um programa que chama esta func¸ ´ ao. ˜
Prototipo: ´
void frac(float num, int* inteiro, float* frac);*/

#include<stdio.h>

void frac(float n, int *i, float *f);

int main(){
    int inteiro;
    float n, fracional;

    printf("Insira um numero fracionario: ");
    scanf("%f", &n);

    frac(n, &inteiro, &fracional);

    printf("\nParte inteira: %d \n", inteiro);
    printf("Parte fracionaria: %f \n", fracional);

    return 0;
}

void frac(float n, int *i, float *f){
    *i = n / 1;
    *f = n - *i;
}