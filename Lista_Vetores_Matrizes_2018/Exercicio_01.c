#include<stdio.h>
int main (){
    int l, c, i, j;
        printf("Forneca o numero de linhas: ");
        scanf("%d",&l);
        printf("Forneca o numero de coluna: ");
        scanf("%d",&c);
        printf("\n");
            for(i=0; i<l; i++){
                for(j=0; j<c; j++){
                    printf(" * ");
                }
                printf("\n");
            }
return 0;
}
