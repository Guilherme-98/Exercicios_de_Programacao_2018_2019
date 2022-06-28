#include<stdio.h>
int main (){
    int n, contador=0, i;
        printf("Forneca um numero maior que zero: ");
        scanf("%d",&n);
        if (n == 0){
            printf("\n\nO numero tem 0 digitos.\n\n");
        }
        else{
            while(n != 0){
                n = n / 10;
                    if((n >= 1) && (n <= 9)){
                        i = n;
                    }
                contador++;
            }
            printf("\n\nO numero tem %d digitos.\n\n",contador);
            printf("O priemiro digito:%d\n\n",i);
        }
return 0;
}
