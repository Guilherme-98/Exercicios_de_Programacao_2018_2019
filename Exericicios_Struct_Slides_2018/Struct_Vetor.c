#include<stdio.h>
    struct Vetor{
        int x;
        int y;
        int z;
    };
int main (){
    int i;
    struct Vetor soma[2];

    for(i=0;i<2;i++){
        printf("Informe o primeiro elemento do %do vetor:",i+1);
        scanf("%d",&soma[i].x);

        printf("Informe o segundo elemento do %do vetor:",i+1);
        scanf("%d",&soma[i].y);

        printf("Informe o terceiro elemento do %do vetor:",i+1);
        scanf("%d",&soma[i].z);
    }
        printf("Vetor soma:(%d,",soma[0].x+soma[1].x);
        printf("%d,",soma[0].y+soma[1].y);
        printf("%d)\n\n",soma[0].z+soma[1].z);
return 0;
}
