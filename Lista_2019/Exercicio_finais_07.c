#include<stdio.h>
int main (){
    int disco[30], i, maior, dia;
        for(i=0; i<30; i++){
            printf("Forneca a quantidade de disco ventido no dia %d: ", i+1);
            scanf("%d",&disco[i]);
        }
        maior = disco[0];
        dia = 1;
        for(i=0; i<30; i++){
            if(disco[i] > maior){
                maior = disco[i];
                dia = i+1;
            }
        }
        printf("\n\nO dia q mais vendeu disco no mes de marco: %d\n\n", dia);
        printf("E a quantidade do dia %d: %d\n",dia,maior);
return 0;
}
