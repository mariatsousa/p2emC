/*Implemente uma func¸ao que receba como parametro um array de n ˆ umeros reais de ´
tamanho N e retorne quantos numeros negativos h ´ a nesse array. Essa func¸ ´ ao deve ˜
obedecer ao prototipo: ´
int negativos(float *vet, int N);*/

#include<stdio.h>

int negativo(int *v, int n);

int main(){
    int v[5] = {1,-1,0,-2,-5};

    int n = negativo(v, 5);

    printf("Quantidade de numeros negativos: %d \n", n);
    
    return 0;
}

int negativo(int *v, int n){
    int quant = 0, *p = v;

    for(int i=0;i<n;i++){
        if(*p<0){
            quant++;
        }

        p++;
    }

    return quant;
}