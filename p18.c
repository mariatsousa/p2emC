/*Implemente uma func¸ao que calcule a ˜ area da superf ´ ´ıcie e o volume de uma esfera de
raio R. Essa func¸ao deve obedecer ao prot ˜ otipo: ´
void calc_esfera(float R, float *area, float *volume)
A area da superf ´ ´ıcie e o volume sao dados, respectivamente, por: ˜
A = 4 ∗ p ∗ R2
V = 4/3 ∗ p ∗ R3*/

#include<stdio.h>

void calc(float r, float *area, float *volume);

int main(){
    float r, area, volume;

    printf("Raio: ");
    scanf("%f", &r);

    calc(r, &area, &volume);

    printf("\nArea: %f | Volume: %f \n", area, volume);

    return 0;
}

void calc(float r, float *area, float *volume){
    *area = r * r * 4 * 3.1415;
    *volume = (r * r * r * 4 * 3.1415) / 3;
}