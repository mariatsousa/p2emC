/*Crie uma func¸ao recursiva que receba um n ˜ umero inteiro positivo N e calcule o somat ´ orio ´
dos numeros de 1 a N. */

#include<stdio.h>

int soma(int);

int main(){
    int n;

    do{
        printf("Insira um numero maior que um:");
        scanf("%d", &n);
    }while(n <= 1);

    int s = soma(n);

    printf("Somatorio de 1 ate %d: %d \n", n, s);

    return 0;    
}

int soma(int a){
    if(a == 1){
        return 1;
    }
    
    return a + soma(a - 1);
}