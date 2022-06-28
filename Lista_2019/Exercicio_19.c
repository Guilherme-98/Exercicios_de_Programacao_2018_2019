#include<stdio.h>
int main (){
    int loc, pecas;
    char nomeC[50], nomeV[50];
    float valor,comissao,totalV,frete,compra;
    printf("Forneca o codigo de localizacao do cliente.\n");
    printf("1 - Sul\n2 - Sudeste\n3 - N, NE, CO\n");
    scanf("%d",&loc);
    while(loc < 1 || loc > 3){
        printf("Erro.Infrome a localizacao correta\n");
        printf("Forneca o codigo de localizacao do cliente.\n");
        printf("1 - Sul\n2 - Sudeste\n3 - N, NE, CO\n");
        scanf("%d",&loc);
    }
    printf("Forneca o nome do cliente\n");
    scanf("%s",&nomeC);
    fflush(stdin);
    printf("Infrome o numero de pecas vendidas:");
    scanf("%d",&pecas);
    printf("Informe o valor unitario de cada peca:");
    scanf("%f",&valor);
    printf("Infrome o nome do vendedor:");
    scanf("%s",&nomeV);
    fflush(stdin);
        if ( loc == 1){
            if(pecas <= 1000){
                totalV = pecas * valor;
                frete = pecas * 1;
                compra = totalV + frete;
                comissao = ((totalV / 100) * 6.5);
            }
            else{
                totalV = pecas * valor;
                frete = pecas * 0.80;
                compra = totalV + frete;
                comissao = ((totalV / 100) * 6.5);
            }
        }

        if ( loc == 2){
            if(pecas <= 1000){
                totalV = pecas * valor;
                frete = pecas * 1.20;
                compra = totalV + frete;
                comissao = ((totalV / 100) * 6.5);
            }
            else{
                totalV = pecas * valor;
                frete = pecas * 1.15;
                compra = totalV + frete;
                comissao = ((totalV / 100) * 6.5);
            }
        }
        if ( loc == 3){
            if(pecas <= 1000){
                totalV = pecas * valor;
                frete = pecas * 2;
                compra = totalV + frete;
                comissao = ((totalV / 100) * 6.5);
            }
            else{
                totalV = pecas * valor;
                frete = pecas * 1.95;
                compra = totalV + frete;
                comissao = ((totalV / 100) * 6.5);
            }
        }
        printf("\n\nO cliente foi:%s\nSua compra foi no valor de:%.2f\nO valor do frete foi de:%.2f\nO total de compra foi de:%.2f\nO vendedor foi:%s\nE sua comissao foi de:%.2f\n",nomeC,totalV,frete,compra,nomeV,comissao);

    return 0;
}
