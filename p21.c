/*Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. As-
socie o ponteiro ao array. Agora, some mais um (+1) a cada posic¸ao do array usando o ˜
ponteiro (use *).*/

#include <stdio.h>

void soma(int *v, int n);

int main(){
    int n = 5;
    int v[n];

    for(int i = 0; i < n; i++){
        printf("Insira o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nANTES: \n");
    for(int i = 0; i < n; i++){
        printf("Numero %d: %d \n", i + 1, v[i]);
    }

    soma(v, n);

    printf("\nDEPOIS: \n");
    for(int i = 0; i < n; i++){
        printf("Numero %d: %d \n", i + 1, v[i]);
    }

    return 0;
}

void soma(int *v, int n){
    for(int i = 0; i < n; i++){
        *(v + i) = *(v + i) + 1;
    }
}