#include<stdio.h>
int main (){
    int num, contadorI=0, contadorP=0, contador=0;
    float mediaG=0, mediaP=0, mediaI=0;
        do{
            printf("Forneca um numero: ");
            scanf("%d",&num);


            mediaG = mediaG + num;
            contador++;

            if(num % 2 == 0 ){
                contadorP++;
                mediaP = mediaP + num;
            }
            else {
                contadorI++;
                mediaI = mediaI + num;
            }

            if(num < 0){
                while(num < 0){
                printf("Numero negativo.Favor inserir um numero positivo.");
                printf("Forneca um numero: ");
                scanf("%d",&num);
                }
            }
        }while(num > 0);


            mediaG = mediaG / contador;
            mediaP = mediaP / contadorP;
            mediaI = mediaI / contadorI;

            printf("\nQuantidade de numeros pares:%d\n",contadorP);
            printf("Quantidade de numeros impares:%d\n",contadorI);
            printf("A media dos numeros pares:%.2f\n",mediaP);
            printf("A media dos numeros impares:%.2f\n",mediaI);
            printf("A media geral:%.2f\n",mediaG);

return 0;
}
