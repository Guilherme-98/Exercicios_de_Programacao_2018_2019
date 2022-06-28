#include<stdio.h>
int main (){
    int n, i, vetor[100];
        printf("Forneca o tamanho da sequencia: ");
        scanf("%d",&n);
            for(i=0; i<n; i++){
                printf("Forneca o %do valor: ",i+1);
                scanf("%d",&vetor[i]);
            }
                printf("\n");
            for(i=n-1; i>=0; i--){
                printf(" %d ",vetor[i]);
            }
return 0;
}
