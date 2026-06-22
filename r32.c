/*Dado um numero n na base decimal, escreva uma func¸ ´ ao recursiva que converte este ˜
numero para bin ´ ario.*/

#include<stdio.h>

void bin(int n);

int main(){
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    printf("Binario: ");
    bin(n);
    printf("\n");

    return 0;
}

void bin(int n){
    if(n == 0)
        return;

    bin(n / 2);
    printf("%d", n % 2);
}