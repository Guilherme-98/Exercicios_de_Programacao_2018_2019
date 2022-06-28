#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    int i,contador,num=2,cont=0;

    FILE *arq;

    arq = fopen("primos.bin","wb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }

    while(cont <= 10000){
        contador = 0;
        i = 1;
        for(i=1;i<=num;i++){
            if(num % i == 0){
                contador++;
            }
        }
        if(contador == 2){
            printf("%d ",num);
            fwrite(&num,sizeof(int),1,arq);
            cont++;
        }
         num++;
    }

    fclose(arq);
return 0;
}
