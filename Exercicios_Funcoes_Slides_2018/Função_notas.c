#include<stdio.h>
float aritmetica(float nota1, float nota2, float nota3){
    float media;
    media = (nota1 + nota2 + nota3)/3;
    return media;
}
float ponderada(float nota1, float nota2, float nota3){
    float media;
    media = ((nota1*5)+(nota2*3)+(nota3*2))/10;
    return media;
}
float soma(float nota1, float nota2, float nota3){
    float Soma;
    Soma = nota1 + nota2 + nota3;
    return Soma;
}
int main (){
    char procedimento;
    float nota[3];
    float resultado;
    int i;

    for(i=0;i<3;i++){
        printf("Forneca a %do nota:",i+1);
        scanf("%f",&nota[i]);
    }
    do{
        printf("Media aritmetica:A\n");
        printf("Media ponderada:P\n");
        printf("Soma das notas:S\n");
        fflush(stdin);
        printf("Forneca o procedimento:");
        scanf("%c",&procedimento);
    }while(procedimento!= 'A' && procedimento != 'P' && procedimento != 'S');
        if(procedimento == 'A'){
            resultado = ponderada(nota[0],nota[1],nota[2]);
            printf("\nMedia aritmetica:%.1f\n\n",resultado);
        }
        if(procedimento == 'P'){
            resultado = ponderada(nota[0],nota[1],nota[2]);
            printf("\nMedia ponderanda:%.1f\n\n",resultado);
        }
        if(procedimento == 'S'){
            resultado = soma(nota[0],nota[1],nota[2]);
            printf("\nSoma das notas:%.1f\n\n",resultado);
        }
return 0;
}
