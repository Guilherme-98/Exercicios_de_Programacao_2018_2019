#include<stdio.h>
#include<string.h>
int main (){
    char nome[5][30];
    float preco[5], menor;
    int i,I;
        for(i=0; i<5; i++){
            printf("Infrome o nome da loja %d:",i+1);
            fflush(stdin);
            scanf("%s", nome[i]);
            printf("Infrome o preco do eletrodomestico:");
            scanf("%f",&preco[i]);
        }
            menor = preco[0];

        for(i=0; i<5; i++){
            if(preco[i] < menor){
                menor = preco[i];
                I = i;

            }
            else{

            }
        }
            printf("\nO menor preco:%.2f. E o nome da loja:%s\n\n",menor,nome[I]);
return 0;
}
