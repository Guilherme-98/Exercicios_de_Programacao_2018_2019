#include<stdio.h>
void conceito(){
    float nota;
    printf("Forneca a media final do aluno:");
    scanf("%f",&nota);
    if(nota >=0 && nota<=4.9){
        printf("Conceito D\n");
    }
    if(nota>=5 && nota<=6.9){
        printf("Conceito C\n");
    }
    if(nota>=7 && nota<=8.9){
        printf("Conceito B\n");
    }
    if(nota>=9 && nota<=10){
        printf("Conceito A\n");
    }
    return;
}
int main (){
    conceito();

return 0;
}
