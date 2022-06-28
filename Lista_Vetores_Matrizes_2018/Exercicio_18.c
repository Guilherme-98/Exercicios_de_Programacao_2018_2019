#include <stdlib.h>
#include <stdio.h>
int main(){
    int x[10];
    int i, j, temp, n, p;
    printf("forneca o tamanho do vetor: ");
    scanf("%d",&n);
        for (i = 0; i<n; i++){
            printf("Digite um numero:");
            scanf("%d",&x[i]);
        }
        for (i=0;i<n; i++)
            for(j=i+1;j<n;j++){
                if (x[i]>x[j]){
                    temp=x[i];
                    x[i]=x[j];
                    x[j]=temp;
                }
            }
    printf("\nVetor em ordem crescente: \n");
        for(i=0;i<n;i++){
            printf(" %d",x[i]);
        }
    printf("\n\nQual maior numero deseja procurar?:");
    scanf("%d",&p);
    for(i=0;i<n;i++){
            if(i == p-1){
            printf(" %d",x[i]);
        }
    }

return 0;
}
