#include<stdio.h>
int main (){
    int anos[10], i;
        for(i=0; i<10; i++){
            printf("Informe o ano %d: ",i+1);
            scanf("%d",&anos[i]);

        }
            printf("\n");
        for(i=0; i<10; i++){
            if(anos[i] % 4 == 0){
                printf("O ano %d e BISSESTO\n",anos[i]);
            }

            else if(anos[i] % 400 == 0){
                printf("O ano %d e BISSESTO\n",anos[i]);
            }
            else {
                printf("O ano %d nao e BISSESTO\n",anos[i]);
            }
        }
return 0;
}
