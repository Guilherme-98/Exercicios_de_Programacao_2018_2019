#include<stdio.h>
int main (){
    int vetor1[10]={1,3,5,7,9,11,13,15,17,19}, vetor2[10]={2,4,6,8,10,12,14,16,18,20},vetor3[20], i;
        for(i=0; i<10; i++){
            vetor3[2*i]=vetor1[i];
            vetor3[2*i+1]=vetor2[i];
        }
            for(i=0; i<20 ;i++){
                printf("%d\n",vetor3[i]);
            }
return 0;
}
