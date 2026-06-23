/*Escreva um programa que receba dois structs do tipo dma, cada um representando uma
data valida, e calcule o n ´ umero de dias que decorreram entre as duas datas.*/

#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

int dias(Data d1, Data d2);

int diaMes(int mes);

int main(){
    Data d1, d2;

    do{
        printf("Data 1 \n");
        do{
            printf(" - Dia: ");
            scanf("%d", &d1.dia);
        } while(d1.dia < 1 || d1.dia > 31);
        do{
            printf(" - Mes: ");
            scanf("%d", &d1.mes);
        } while(d1.mes < 1 || d1.mes > 12);
        printf(" - Ano: ");
        scanf("%d", &d1.ano);

    } while((d1.dia > 28 && d1.mes == 2) || (d1.dia == 30 && d1.mes == 4) 
            || (d1.dia == 30 && d1.mes == 6) || (d1.dia == 30 && d1.mes == 9) 
            || (d1.dia == 30 && d1.mes == 11));

    
    do{
        printf("Data 2: \n");
        do{
            printf(" - Dia: ");
            scanf("%d", &d2.dia);
        } while(d2.dia < 1 || d2.dia > 31);
        do{
            printf(" - Mes: ");
            scanf("%d", &d2.mes);
        } while(d2.mes < 1 || d2.mes > 12);
        printf(" - Ano: ");
        scanf("%d", &d2.ano);
        
    } while((d2.dia > 28 && d2.mes == 2) || (d2.dia == 31 && d2.mes == 4) 
            || (d2.dia == 31 && d2.mes == 6) || (d2.dia == 31 && d2.mes == 9) 
            || (d2.dia == 31 && d2.mes == 11));

    printf("Dias entre  %d/%d/%d e %d/%d/%d: %d \n", d1.dia, d1.mes, d1.ano, d2.dia, d2.mes, d2.ano, dias(d1, d2));

    return 0;
}

int dias(Data d1, Data d2){
    int total1 = 0, total2 = 0;

    total1 += d1.ano * 365;
    total2 += d2.ano * 365;

    for(int i = 1; i < d1.mes; i++){
        total1 += diaMes(i);
    }

    for(int i = 1; i < d2.mes; i++){
        total2 += diaMes(i);
    }

    total1 += d1.dia;
    total2 += d2.dia;

    int diff = total2 - total1;

    return diff;
}

int diaMes (int mes){
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        return 31;
    }else if(mes == 2){
        return 28;
    }else{
        return 30;
    }
}