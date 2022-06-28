#include<stdio.h>
int main (){
    float velocidade[10];
    int i;
        for(i=0; i<10; i++){
            printf("Infrome a velocidade do carro %d em Km\\h:",i+1);
            scanf("%f",&velocidade[i]);
        }
            for(i=0; i<10; i++){
                if(velocidade[i] <= 33){
                    printf("\nVelocidade:%.2f.Veiculo %d. Dentro da velocidade permitida.\n",velocidade[i],i+1);
                }
                if(velocidade[i] > 33 && velocidade[i] < 39){
                   printf("\nVelocidade:%.2f. Veiculo %d. Acima da velocidade permitida. Veiculo sera atuado.\n",velocidade[i],i+1);
                }
                if(velocidade[i] == 39){
                    printf("\nVelocidade:%.2f. Veiculo %d. Acima da velocidade permitida. Veiculo multado em R$ 128,00.\n",velocidade[i],i+1);
                }
                if(velocidade[i] > 39){
                    printf("\nVelocidade:%.2f. Veiculo %d. Acima da velocidade permitida. Veiculo multado em R$ 540,00.\n",velocidade[i],i+1);

                }
            }

return 0;
}
