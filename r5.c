/*Fac¸a uma func¸ao recursiva que calcule e retorne o N- ˜ esimo termo da sequ ´ encia Fibo- ˆ
nacci. Alguns numeros desta sequ ´ encia s ˆ ao: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...*/

#include<stdio.h>

int fibonacci(int);

int main(){
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    int f = fibonacci(n);

    printf("%d \n", f);

    return 0;
}

int fibonacci(int n){
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}