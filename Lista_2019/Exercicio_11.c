#include<stdio.h>
int main (){
    int num;
    printf("Informe um numero:");
    scanf("%d",&num);
    if(num > 0){
        printf("valor %d e um numero positivo.\n",num);
    }
    if(num < 0){
        printf("valor %d e um numero negativo.\n",num);
    }
    if(num == 0){
        printf("valor %d e zero.\n",num);
    }
return 0;
}
