/*Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings.*/

#include<stdio.h>
#include<string.h>

int verif(char *a, char *b);

int main(){
    char s1[30], s2[30];

    printf("String 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';

    printf("String 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2) - 1] = '\0';
    
    if(verif(s1, s2)){
        printf("Ocorre! \n");
    }else{
        printf("Nao ocorre. \n");
    }
    
    return 0;
}

int verif(char *a, char *b){
    char *p1, *p2;

    for(; *a != '\0'; a++){
        p1 = a;
        p2 = b;

        while(*p1 != '\0' && *p2 != '\0' && *p1 == *p2){
            p1++;
            p2++;
        }

        if(*p2 == '\0'){
            return 1; 
        }
    }

    return 0;
}