/* Crie uma funcao recursiva que receba dois inteiros positivos k e n e calcule k^n*/

#include<stdio.h>

int exponencial(int, int);

int main(){
    int k, n;

    printf("Base: ");
    scanf("%d", &k);
    printf("Expoente: ");
    scanf("%d", &n);

    int r = exponencial(k, n);

    printf("%d elevado a %d: %d \n", k, n, r);

    return 0;
}

int exponencial(int k, int n){
    if(n == 0)
        return 1;

    return k * exponencial(k, n - 1);
}