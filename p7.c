/*Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal.*/

#include <stdio.h>

void soma(int *a, int *b);

int main(){
    int n1, n2;

    printf("Insira A: ");
    scanf("%d", &n1);
    printf("Insira B: ");
    scanf("%d", &n2);

    printf("\nANTES: A = %d | B = %d \n", n1, n2);

    soma(&n1, &n2);

    printf("DEPOIS: A = %d | B = %d \n", n1, n2);

    return 0;
}

void soma(int *a, int *b){
    *a += *b;
}