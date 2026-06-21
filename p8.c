/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array.*/

#include <stdio.h>

int main(){
    float v[10];

    for(int i = 0; i < 10; i++){
        printf("Numero %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    for(int i = 0; i < 10; i++){
        float *p = &v[i];
        printf("Enderoco numero %d: %p \n", i +1, p);
    }

    return 0;
}