#include<stdio.h>
int main (){
    int n1, n2;
    printf("Informe o primeiro numero:");
    scanf("%d",&n1);
    printf("Informe o segundo numero:");
    scanf("%d",&n2);
        if (n1 == n2){
            printf("Os numeros tem o mesmo valor.\n");
        }
        else {
            if(n1 > n2){
                printf("O maior valor e:%d\n",n1);
            }
            else{
                printf("O maior valor e:%d\n",n2);
            }
        }
return 0;
}
