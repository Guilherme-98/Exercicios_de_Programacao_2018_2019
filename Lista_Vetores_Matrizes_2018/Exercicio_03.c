#include<stdio.h>
int main (){
    int num, num2, primos=0, contador=0;
    num = 2;
        while(primos <= 10000){
        num2 = 1;
        contador = 0;
            while(num2 <= num){
                if(num % num2 == 0){
                    contador++;
                }
                num2++;
            }
                if(contador == 2){
                    printf("%d\n",num);
                    primos++;
                }
        num++;
        }
return 0;
}
