#include<stdio.h>
#include<stdlib.h>
int main (){
    int num,par;

    FILE *arq;
    arq = fopen("numeros.bin","wb");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n\n");
            system("pause");
            exit(1);
        }
        do{
            printf("Forneca o numero para salvar no arquivo:");
            scanf("%d",&num);
            fwrite(&num,sizeof(int),1,arq);
        }while(num != 0);
    fclose(arq);


    arq = fopen("numeros.bin","rb");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n\n");
            system("pause");
            exit(1);
        }
        FILE *arq2;
        arq2 = fopen("par.bin","wb");
        if(arq2 == NULL){
            printf("Erro na abertura do arquivo.\n\n");
            system("pause");
            exit(1);
        }
        while(fread(&num,sizeof(int),1,arq)==1){
            if(num % 2 == 0){
                fwrite(&num,sizeof(int),1,arq2);
            }else{
            }
        }
fclose(arq);
fclose(arq2);

arq2 = fopen("par.bin","rb");
        if(arq2 == NULL){
            printf("Erro na abertura do arquivo.\n\n");
            system("pause");
            exit(1);
        }
        while(fread(&par,sizeof(int),1,arq2)==1){
            printf("%d\n",par);
        }
fclose(arq2);

return 0;
}
