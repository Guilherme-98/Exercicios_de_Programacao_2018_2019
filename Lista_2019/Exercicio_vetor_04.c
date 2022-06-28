#include<stdio.h>
int main (){
    int vetor[10], vetorF[10], fatorial, i, k;
        for(i=0; i<10; i++){
            printf("Forneca o elemento %d:",i+1);
            scanf("%d",&vetor[i]);
        }
        for(i=0; i<10; i++){
            fatorial = 1;
                for(k=vetor[i]; k>0; k--){
                    fatorial = fatorial * k;
                }
            vetorF[i] = fatorial;
            printf("%d\n",vetorF[i]);

        }
return 0;
}
