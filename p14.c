/*Crie uma func¸ao que receba dois par ˜ ametros: um array e um valor do mesmo tipo do ˆ
array. A func¸ao dever ˜ a preencher os elementos de array com esse valor. N ´ ao utilize ˜
´ındices para percorrer o array, apenas aritmetica de ponteiros*/

#include <stdio.h>

void preencher(int *v, int tam, int n);

int main(){
    int v[5] = {1,2,3,4,5};
    int n = 200;

    preencher(v, 5, n);

    for(int i = 0; i < 5; i++){
        printf("%d \n", v[i]);
    }

    return 0;
}

void preencher(int *v, int tam, int n){
    for(int *p = v; p < v + tam; p++){
        *p = n;
    }
}