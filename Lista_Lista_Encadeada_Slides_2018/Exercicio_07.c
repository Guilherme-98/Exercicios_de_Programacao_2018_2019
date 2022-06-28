#include<stdio.h>
#include<stdlib.h>
struct Carro{
    char modelo[30];
    char marca[15];
    float preco;
};
int main (){
    struct Carro aux;

    FILE *arq;
        arq = fopen("carros.bin","rb");
            if(arq == NULL){
                printf("Erro na abertura do arquivo.\n");
                system("pause");
                exit(1);
            }
        fseek(arq,4*sizeof(struct Carro),SEEK_SET);
        fread(&aux,sizeof(struct Carro),1,arq);

        printf("Modelo:%s\n",aux.modelo);
        printf("Marca:%s\n",aux.marca);
        printf("Preco:%.2f\n\n",aux.preco);
 fclose(arq);

    arq = fopen("carros.bin","rb");
            if(arq == NULL){
                printf("Erro na abertura do arquivo.\n");
                system("pause");
                exit(1);
            }
        fseek(arq, -1*sizeof(struct Carro),SEEK_END);
        fread(&aux,sizeof(struct Carro),1,arq);

        printf("Modelo:%s\n",aux.modelo);
        printf("Marca:%s\n",aux.marca);
        printf("Preco:%.2f\n",aux.preco);
 fclose(arq);
return 0;
}
