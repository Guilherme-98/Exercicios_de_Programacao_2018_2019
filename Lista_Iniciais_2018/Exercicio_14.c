#include<stdio.h>
int main (){
    int num;
    do{
    printf("Infrome um numero de 1 a 7:");
    scanf("%d",&num);
        switch(num){
            case 1:
                printf("domingo\n");
                break;
            case 2:
                printf("Segunda\n");
                break;
            case 3:
                printf("Terca\n");
                break;
            case 4:
                printf("Quarta\n");
                break;
            case 5:
                printf("Quinta\n");
                break;
            case 6:
                printf("Sexta\n");
                break;
            case 7:
                printf("Sabado\n");
                break;
            default:
                printf("Erro. Valor nao corresponde a un dia da semana.\n");
        }
    }while(num < 1 || num >7);
return 0;
}
