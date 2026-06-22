/*Fac¸a uma func¸ao recursiva que permita somar os elementos de um vetor de inteiros.*/

#include<stdio.h>

int soma(int v[], int n);

int main(){
    int v[5] = {1,2,3,4,5};

    int s = soma(v, 4);
    printf("Soma: %d \n", s);

    return 0;
}

int soma(int v[], int n){
    if(n == 0)
        return v[n];

    return v[n] + soma(v, n - 1);
}