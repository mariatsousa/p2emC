/*Crie um programa que contenha uma funcao recursiva para encontrar o menor elemento
em um vetor.*/

#include<stdio.h>

int menor(int v[], int n);

int main(){
    int n;
    
    printf("tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        printf("posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    int m = menor(v, n);

    printf("Menor: %d \n", m);

    return 0; 
}

int menor(int v[], int n){
    if(n == 1)
        return v[n -1];

}