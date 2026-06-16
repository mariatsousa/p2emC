/*Escreva uma func¸ao recursiva que exibe todos os elementos em um array de inteiros, ˜
separados por espaco.*/

#include <stdio.h>

void aray(int v[], int n);

int main(){
    int n;
    
    printf("tamanho do array: ");
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        printf("posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    aray(v, n);

    return 0;
}

void aray(int v[], int n){
    if(n == 1)
        printf("%d ", v[n -1]);
    else{
        aray(v, n -1);
        printf("%d ", v[n - 1]);
    }
}