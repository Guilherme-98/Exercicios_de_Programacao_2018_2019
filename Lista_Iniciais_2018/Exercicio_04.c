#include<stdio.h>
int main (){
    int num, menor,maior;
    float media=0,contador=0;
    printf("Informe um numero:");
    scanf("%d", &num);
    maior = num;
    menor = num;

    while(num != 0){
        if(num <  menor){
            menor = num;
        }
            if(num > maior){
                maior = num;
            }
        media = (media + num);
        contador++;

        printf("Informe um valor:");
        scanf("%d",&num);
    }
        media = media / contador;

    printf("O menor valor e:%d\n",menor);
    printf("O maior valor e:%d\n",maior);
    printf("A media dos valores informado e:%.2f\n",media);

return 0;
}
