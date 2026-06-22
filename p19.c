/*Escreva uma func¸ao que aceita como par ˜ ametro um array de inteiros com N valores, e ˆ
determina o maior elemento do array e o numero de vezes que este elemento ocorreu ´
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a func¸ao deve retorna para o programa que a chamou o valor 15 e o n ˜ umero 3 ´
(indicando que o numero 15 ocorreu 3 vezes). A func¸ ´ ao deve ser do tipo ˜ void.*/

#include<stdio.h>

void maior(int v[], int n, int *maior, int *quant);

int main(){
    int v[9] = {5,2,15,3,7,15,8,6,15};

    int m, q;
    maior(v, 9, &m, &q);

    printf("Maior: %d | Aparece %d vezes \n", m, q);
}

void maior(int v[], int n, int *maior, int *quant){
    for(int i = 0; i < n; i++){
        if(i == 0){
            *maior = v[i];
            *quant = 1;
        }else{
            if(v[i] > *maior){
                *maior = v[i];
                *quant = 1;
            }else if(v[i] == *maior){
                (*quant)++;
            }
        }
    }
}