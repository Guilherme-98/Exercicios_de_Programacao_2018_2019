#include<stdio.h>
int main (){
    float nota;
    printf("Infrome a nota:");
    scanf("%f",&nota);
    while(nota < 0.0){
        printf("Nota negativa.Erro.\n");
        printf("Infrome a nota:");
        scanf("%f",&nota);
    }
    if(nota >= 0.0 && nota <= 5.0){
        printf("Conceito D\n");
    }

    if(nota > 5.0 && nota <= 7.0){
        printf("Conceito C\n");
    }

    if(nota > 7.0 && nota <= 9.0){
        printf("Conceito B\n");
    }

    if(nota > 9.0 && nota <= 10.0){
        printf("Conceito A\n");
    }

return 0;
}
