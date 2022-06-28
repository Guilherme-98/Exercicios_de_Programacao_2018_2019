#include<stdio.h>
int main (){
    int i,tempo;
    float consumoT = 0,porcentagem[4];

    struct Eletromestico{
        char nome[15];
        float potencia;
        int tempoAtivo;
        float consumoR;
    };
    struct Eletromestico produto[4];
        do{
            printf("Infrome um tempo em dias: ");
            scanf("%d",&tempo);
        }while(tempo < 1 || tempo > 31);

        for(i=0; i<4; i++){
            fflush(stdin);
            printf("Infrome o nome do %do eletromestico: ",i+1);
            fgets(produto[i].nome,15,stdin);
            fflush(stdin);

            printf("Informe a potencia em KW: ");
            scanf("%f",&produto[i].potencia);

            do{
                printf("Infrome o tempo ativo por dia: ");
                scanf("%d",&produto[i].tempoAtivo);
            }while(produto[i].tempoAtivo < 0 || produto[i].tempoAtivo > 24);

                produto[i].consumoR = ((produto[i].tempoAtivo * produto[i].potencia)/1000)*tempo;
                consumoT = consumoT + produto[i].consumoR;
        }
            for(i=0; i<4; i++){
                porcentagem[i] = ((100 * produto[i].consumoR ) / consumoT);
            }
                printf("\n\nNumeros referentes a quantidades de dias:%d\n",tempo);
                printf("Consumo Total:%.2f\n\n",consumoT);

            for(i=0; i<4; i++){
                printf("Produto:%s",produto[i].nome);
                printf("Potencia:%.2f\n",produto[i].potencia);
                printf("Tempo ativo por dia:%d\n",produto[i].tempoAtivo);
                printf("Cosumo Relativo:%.2f\n",produto[i].consumoR);
                printf("Consumo Relativo em %%:%.2f\n\n",porcentagem[i]);
            }
return 0;
}
