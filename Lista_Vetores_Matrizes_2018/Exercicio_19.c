#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int i,j,n[20],contador;
        srand((unsigned)time(NULL));
        //GERANDO NUMEROS ALEATORIOS//
        for(i=0;i<20;i++){
            n[i] = (rand()% 30 -15);
            printf("%d ",n[i]);
        }
        //COMPARANDO O VETOR PARA VER QUAL O PRIMEIRO ELEMENTO QUE APARECE REPEDIDO//
        for(i=0;i<20;i++){
            contador = 0;
            for(j=i;j>=0;j--){
                if(n[i] == n[j]){
                    contador++;
                }
            }
            if(contador == 2){
                printf("\n\nO primeiro elemento a repedir:%d\n\n",n[i]);
                return 0;
            }
        }

return 0;
}
