/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.*/

#include <stdio.h>
#include <string.h>

int main(){
    int i = 10;
    float r = 5.5;
    char c = 'A';

    int *pi = &i;
    float *pr = &r;
    char *pc = &c;

    printf("ANTES: \n");
    printf(" Inteiro: %d \n Real: %f \n Char: %c", i, r, c);

    *pi = 20;
    *pr = 9.9;
    *pc = 'z';

    printf("\n\nDEPOIS: \n");
    printf(" Inteiro: %d \n Real: %f \n Char: %c \n", i, r, c);

    return 0;
}