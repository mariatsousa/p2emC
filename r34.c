/*Fac¸a uma func¸ao recursiva que permita inverter um n ˜ umero inteiro N. Ex: 123 - 321*/

#include<stdio.h>

int in(int n);

int main(){
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    printf("Invertido: %d", in(n));
    printf("\n");

    return 0;
}

int in(int n){
    if(n < 10)
        return n;

    int pot = 1;
    int temp = n;

    while(temp >= 10){
        pot *= 10;
        temp /= 10;
    }

    return (n % 10) * pot + in(n / 10);
}