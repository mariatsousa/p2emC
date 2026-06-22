/*Fac¸a um programa para armazenar um livro de receitas e:
• Crie um vetor de 5 receitas, que deve ter nome (maximo 25 letras), quantidade de ´
ingredientes e ingredientes.
• Para cada receita, leia seu nome e a quantidade de ingredientes. Entao crie e leia ˜
o vetor de ingredientes, sendo que cada ingrediente contem nome e quantidade. ´
• Procure receita por nome, mostrando seus ingredientes se encontrar. Se nao en- ˜
contrar, informe ao usuario. Repita o processo at ´ e digitar uma string vazia.*/

#include <stdio.h>
#include <string.h>
#include <strings.h>

typedef struct{
    char nome[20];
    int quant;
    char medida[20];
}Ingrediente;

#define MAX_ING 50

typedef struct{
    char nome[30];
    int q;
    Ingrediente i[MAX_ING];
} Receita;

void buscar(Receita r[], int q, char n[]);

int main(){
        Receita r[5] = {
        {
            "Bolo de Chocolate",
            3,
            {
                {"Farinha", 2, "xicaras"},
                {"Chocolate em po", 1, "xicara"},
                {"Ovos", 3, "unidades"}
            }
        },
        {
            "Pao de Queijo",
            4,
            {
                {"Polvilho", 500, "g"},
                {"Queijo", 200, "g"},
                {"Ovos", 2, "unidades"},
                {"Leite", 1, "xicara"}
            }
        },
        {
            "Lasanha",
            5,
            {
                {"Massa", 1, "pacote"},
                {"Carne moida", 500, "g"},
                {"Molho tomate", 2, "xicaras"},
                {"Queijo", 300, "g"},
                {"Presunto", 200, "g"}
            }
        },
        {
            "Brigadeiro",
            3,
            {
                {"Leite condensado", 1, "lata"},
                {"Chocolate", 4, "colheres"},
                {"Manteiga", 1, "colher"}
            }
        },
        {
            "Panqueca",
            4,
            {
                {"Farinha", 1, "xicara"},
                {"Leite", 1, "xicara"},
                {"Ovos", 2, "unidades"},
                {"Sal", 1, "pitada"}
            }
        }
    };

    char n[30];
    printf("Buscar receita \n");

    do{
        printf("Nome: ");
        fgets(n, sizeof(n), stdin);
        n[strlen(n) - 1] = '\0';

        buscar(r, 5, n);

    } while(n[0] != '\0');
}

void buscar(Receita r[], int q, char n[]){
    char l1, l2;
    int cond = 0;

    for(int i = 0; i < q; i++){
        if(strlen(r[i].nome) > strlen(n)){
            for(int j = 0; j < strlen(r[i].nome); j++){
                if(r[i].nome[j] >= 'A' && r[i].nome[j] <= 'Z'){
                    l1 = r[i].nome[j] + 32;
                }else{
                    l1 = r[i].nome[j];
                }

                if(n[j] >= 'A' && n[j] <= 'Z'){
                    l2 = n[j] + 32;
                }else{
                    l2 = n[j];
                }

                if(l2 == '\0'){
                    cond++;
                    printf("\n %s", r[i].nome);
                    printf("\n Ingredientes: \n");
                    for(int k = 0; k < r[i].q; k++){
                        printf(" - %d %s de %s \n", r[i].i[k].quant, r[i].i[k].medida, r[i].i[k].nome);
                    }
                }

                if(l2 != l1){
                    break;
                }
            }
        }
    }

    if(cond == 0){
        printf("Nao encontrado!! \n");
    }
}