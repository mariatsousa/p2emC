/*Fac¸a um programa que gerencie o estoque de um mercado e:
• Crie e leia um vetor de 5 produtos, com os dados: codigo (inteiro), nome (m ´ aximo ´
15 letras), prec¸o e quantidade.
• Leia um pedido, composto por um codigo de produto e a quantidade. Localize ´
este codigo no vetor e, se houver quantidade suficiente para atender ao pedido ´
integralmente, atualize o estoque e informe o usuario. Repita este processo at ´ e ler ´
um codigo igual a zero. ´
Se por algum motivo nao for poss ˜ ´ıvel atender ao pedido, mostre uma mensagem infor-
mando qual erro ocorreu.*/

#include<stdio.h>
#include<string.h>

typedef struct{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
} Produto;

int main(){
    Produto v[5] = {
        {101, "Arroz", 5.99, 20},
        {102, "Feijao", 7.50, 15},
        {103, "Macarrao", 4.25, 30},
        {104, "Acucar", 3.80, 10},
        {105, "Cafe", 12.90, 8}
    };

    int c, q, pos = 5;

    do{
        printf("Insira o codigo do produto: ");
        scanf("%d", &c);
        printf("Insira a quantidade do produto: ");
        scanf("%d", &q);

        for(int i = 0; i<5; i++){
            if(v[i].codigo == c){
                pos = i;
                break;
            }
        }

        if(pos == 5){
            printf("\nProduto nao encontrado! \n");
            break;
        }else{
            if(v[pos].quantidade < q){
                printf("\nQuantidade insuficiente! \n");
            }else{
                printf("\n\nPEDIDO: \n");
                float valor = v[pos].preco * q;
                printf("%d %s - %.2f reais \n\n", q, v[pos].nome, valor);
                v[pos].quantidade -= q;
            }
        }

    }while(c != 0);

    return 0;
}