/*O maximo divisor comum dos inteiros x e y e o maior inteiro que e divisıvel por x e y.
Escreva uma funcao recursiva mdc que retorna o maximo divisor comum de x e y. O ´
mdc de x e y e definido como segue: se y e igual a 0, ent ´ ao mdc(x,y) ˜ e x; caso contr ´ ario, ´
mdc(x,y) e mdc (y, x%y), onde % ´ e o operador rest*/

#include<stdio.h>

int mdc(int a, int b);

int main(){
    int x, y;

    printf("Insira os numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("Maior divisor comum: %d \n", mdc(x, y));

    return 0;
}

int mdc(int a, int b){
    if(b == 0)
        return a;
    return mdc(b, a%b);
}