/*Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A.*/

#include <stdio.h>

void troca(int *a, int *b);

int main(){
    int n1, n2;

    printf("Insira A: ");
    scanf("%d", &n1);
    printf("Insira B: ");
    scanf("%d", &n2);

    printf("\nANTES: A = %d | B = %d \n", n1, n2);

    troca(&n1, &n2);

    printf("DEPOIS: A = %d | B = %d \n", n1, n2);

    return 0;
}

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}