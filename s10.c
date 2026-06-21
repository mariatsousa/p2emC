/*Utilizando uma estrutura, fac¸a um programa que permita a entrada de nome, enderec¸o e
telefone de 5 pessoas e os imprima em ordem alfabetica.*/

#include<stdio.h>
#include<string.h>
#include<strings.h>

typedef struct{
    char nome[50];
    char endereco[60];
    int telefone;
} Pessoa;

void alfabetica(Pessoa v[], int n);

int main(){
    Pessoa v[5];

    for(int i = 0; i < 5; i++){
        printf("Pessoa %d \n", i + 1);
        printf(" - Nome: ");
        fgets(v[i].nome, sizeof(v[i].nome), stdin);
        v[i].nome[strlen(v[i].nome) - 1] = '\0',
        printf(" - Endereco: ");
        fgets(v[i].endereco, sizeof(v[i].endereco), stdin);
        v[i].endereco[strlen(v[i].endereco) - 1] = '\0';
        printf(" - Telefone: ");
        scanf("%d", &v[i].telefone);
        getchar();
    }

    alfabetica(v, 5);

    return 0;
}

void alfabetica(Pessoa v[], int n){
    Pessoa temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(strcasecmp(v[i].nome, v[j].nome) > 0){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    printf("\n\nOrdem Alfabetica: \n");
    for(int i = 0; i < n; i++){
        printf("%s\n", v[i].nome);
    }
}