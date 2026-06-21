/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido.*/

#include<stdio.h>

void dobro(int *v);

int main(){
    int v[5] ={1,2,3,4,5};

    dobro(v);

    for(int i = 0; i<5; i++){
        printf("%d \n", v[i]);
    }
}

void dobro(int *v){
    int *p = v;

    for(int i = 0; i < 5; i++){
        *p *= 2;
        p++;
    }
}