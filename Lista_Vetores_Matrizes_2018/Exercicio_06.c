#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main (){
    int n,tentativa,contador = 0;
        srand((unsigned)time(NULL));
        n = (rand()%101);

        do{
            printf("Informe um numero:");
            scanf("%d",&tentativa);
                contador++;

                if(tentativa > n){
                    printf("Numero digitado maior que o numero gerado. Tente novamente.\n");
                }

                if(tentativa < n){
                    printf("Numero digitado menor que o numero gerado. Tente novamente.\n");
                }
        }while(n != tentativa);

        printf("\n\nParabens!! Voce acertou o numero %d.\n",n);
        printf("Voce precisou de %d tentativas para acertar o numero.\n\n",contador);

return 0;
}
