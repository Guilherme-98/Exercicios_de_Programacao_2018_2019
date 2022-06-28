#include<stdio.h>
int main (){
    int i, divisao, contador=0,num=0,quant=0;
    while(quant<100){
        for (i=1; i<=num; i++){
            divisao = num % i;
                if(divisao == 0){
                    contador++;
                }
        }
                  if(contador == 2){
                    printf("%d\n",num);
                    quant++;
                  }
        num++;
        contador=0;
    }

return 0;
}
