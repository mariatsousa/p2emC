/*Escreva uma func¸ao que retorna o maior valor de um array de tamanho N. Escreva um ˜
programa que leia N valores inteiros, imprima o array com k elementos por linha, e o
maior elemento. O valor de k tambem deve ser fornecido pelo usuario.*/

#include<stdio.h>

void maior(int *v, int n, int k, int *maior);

int main(){
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i<n; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int k;
    printf("Insira k: ");
    scanf("%d", &k);

    int m;
    maior(v, n, k, &m);

    return 0;
}

void maior(int *v, int n, int k, int *maior){
    int c = 0;
    for(int i = 0; i < n; i++){
        printf("%d ", *v);
        c++;

        if(c == 1){
            *maior = *v;
        }else{
            if(*v > *maior){
                *maior = *v;
            }
        }
        if(c % k == 0){
            printf("| Maior: %d \n", *maior);
            c = 0;
        }else{
            if(i == n - 1){
                printf("| Maior: %d \n", *maior);
            }
        }
        v++;
    }
}