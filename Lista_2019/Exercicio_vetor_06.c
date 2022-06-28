#include<stdio.h>
int main (){
    int elementos[10]={1,2,3,4,5,6,7,8,9,10};
    int i,contador = 0, num;
        printf("Forneca um numero para verificar se pertence ou nao ao vetor:");
        scanf("%d",&num);
            for(i=0; i<10; i++){
                if(elementos[i] == num){
                    contador++;
                }
            }
                    if(contador > 0){
                        printf("\nEsse numero pertence ao vetor.\n");
                    }
                    else{
                        printf("\nEsse numero nao pertence ao vetor.\n");
                    }
return 0;
}
