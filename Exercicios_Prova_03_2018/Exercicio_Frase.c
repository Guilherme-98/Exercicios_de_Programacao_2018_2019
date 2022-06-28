#include<stdio.h>
#include<stdlib.h>
int main (){
    char c;

        FILE *arq;
        arq = fopen("texto1.txt","r");
            if(arq == NULL){
                printf("Erro na abertura do arquivo.\n");
                system("pause");
                exit(1);
            }

        FILE *arq2;
        arq2 = fopen("texto2.txt","r");
            if(arq2 == NULL){
                printf("Erro na abertura do arquivo.\n");
                system("pause");
                exit(1);
            }

        FILE *arq3;
        arq3 = fopen("texto4.txt","w");
            if(arq3 == NULL){
                printf("Erro na abertura do arquivo.\n");
                system("pause");
                exit(1);
            }

            while(1){
                c = fgetc(arq);
                if(feof(arq)){
                    break;
                }
                  fprintf(arq3,"%d",c);
                printf("%d",c);

            }

            while(1){
                c = fgetc(arq2);
                if(feof(arq2)){
                    break;
                }
                  fprintf(arq3,"%d",c);
                printf("%d",c);

            }

    fclose(arq);
    fclose(arq2);
    fclose(arq3);
return 0;
}
