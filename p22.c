/*Crie uma func¸ao para somar dois arrays. Esta func¸ ˜ ao deve receber dois arrays e retornar ˜
a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
entao a func¸ ˜ ao retornar ˜ a ZERO (0). Caso a func¸ ´ ao seja conclu ˜ ´ıda com sucesso a mesma
deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulac¸ ´ ao do array.*/

#include<stdio.h>

int soma(int *v, int n1, int *v2, int n2, int *vs);

int main(){
    int v1[5] = {1,2,3,4,5};
    int v2[5] = {9,8,7,6,5};
    int vs[5];

    if(soma(v1, 5, v2, 5, vs)){
        for(int i = 0; i < 5; i++){
            printf("%d ", *(vs + i));
        }
    } else {
        printf("Tamanhos diferentes!\n");
    }
}

int soma(int *v, int n1, int *v2, int n2, int *vs){
    if(n1 != n2) return 0;

    for(int i = 0; i < n1; i++){
        *(vs + i) = *(v + i) + *(v2 + i);
    }

    return 1;
}