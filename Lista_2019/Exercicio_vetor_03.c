#include<stdio.h>
int main (){
    int aux, k=9,i;
    int vetorA[10]={1,2,3,4,5,6,7,8,9,10};
    int vetorB[10]={11,12,13,14,15,16,17,18,19,20};
        for(i=0; i<10; i++){
            aux = vetorA[i];
            vetorA[i] = vetorB[k];
            vetorB[k] = aux;
            k--;
        }
        printf("VetorA\n");
            for(i=0; i<10; i++){
                printf("%d\n",vetorA[i]);
            }
            printf("VetorB\n");
                for(i=0; i<10; i++){
                    printf("%d\n",vetorB[i]);
                }
return 0;
}
