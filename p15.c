/*Crie uma func¸ao que receba como par ˜ ametro um array e o imprima. N ˆ ao utilize ˜ ´ındices
para percorrer o array, apenas aritmetica de ponteiros.*/

#include<stdio.h>

void imprime(int *v);

int main(){
    int v[5] = {1,2,3,4,5};

    imprime(v);

    return 0;
}

void imprime(int *v){
    int *p = v;

    for(int i = 0; i < 5;i++){
        printf("%d \n", *p);
        p++;
    }
}