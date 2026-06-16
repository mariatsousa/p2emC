/*. Fac¸a uma func¸ao recursiva que calcule e retorne o fatorial de um n ˜ umero inteiro N.*/

#include<stdio.h>

int fat(int);

int main(){
    int n;
    printf("Insira um numero positivo: ");
    scanf("%d", &n);

    int f = fat(n);

    printf("%d! = %d \n", n, f);

    return 0;
}

int fat(int n){
    if(n ==0)
        return 1;

    return n * fat(n - 1);
}