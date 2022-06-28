#include<stdio.h>
int main (){
    int contadorP=0, contadorN=0, i;
    float temp[30], mediaP, maiorT;
        for(i=0; i<30; i++){
            printf("Forneca a temperatura do dia %d: ",i+1);
            scanf("%f",&temp[i]);
        }
        for(i=0; i<30; i++){
            if(temp[i] >= 0){
                    contadorP++;
                    mediaP = mediaP + temp[i];
            }
            else {
                contadorN++;
            }
        }
        maiorT = temp[0];
        for(i=0; i<30; i++){
            if(temp[i] > maiorT){
                maiorT = temp[i];
            }
        }

        mediaP = mediaP / contadorP;

        printf("\nA quantidade de temperaturas positivas: %d\n",contadorP);
        printf("\nA quantidade de temperaturas negativas: %d\n",contadorN);
        printf("\nA media das temperaturas positivas: %.2f\n",mediaP);
        printf("\nA maior temperatura: %.2f\n",maiorT);
return 0;
}
