#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Carro{
    char modelo[30];
    char marca[15];
    float preco;
    struct Carro *prox;
};
struct Carro *criar(){
    printf("Lista criada com secesso.\n");
    return NULL;
}
struct Carro *inserir(struct Carro *inicio,struct Carro conteudo){
    struct Carro *aux;
    struct Carro *aux2;
        if(inicio == NULL){
            inicio = (struct Carro*)malloc(sizeof(struct Carro));
            strcpy(inicio->modelo,conteudo.modelo);
            strcpy(inicio->marca,conteudo.marca);
            inicio->preco = conteudo.preco;
            inicio->prox = NULL;
        }
        else{
            aux = inicio;
            while(aux->prox != NULL){
                aux = aux->prox;
            }
            aux2 = (struct Carro*)malloc(sizeof(struct Carro));
            strcpy(aux2->modelo,conteudo.modelo);
            strcpy(aux2->marca,conteudo.marca);
            aux2->preco = conteudo.preco;
            aux2->prox = NULL;
            aux->prox = aux2;
        }
        printf("Elemento inserido com sucesso.\n");
    return inicio;
}
void imprimir(struct Carro *inicio){
    struct Carro *aux;
        aux = inicio;
            while(aux != NULL){
                printf("Modelo:%s\n",aux->modelo);
                printf("Marca:%s\n",aux->marca);
                printf("Preco:%.2f\n\n",aux->preco);
                aux = aux->prox;
            }
}
void desalocar (struct Carro *inicio){
    struct Carro *aux;
    aux = inicio;
        while(inicio != NULL){
            aux = aux->prox;
            free(inicio);
            inicio = aux;
        }
}
int main (){
    struct Carro conteudo;
    struct Carro *inicio;
    FILE *arq;


        arq = fopen("carros.bin","rb");
            if(arq == NULL){
                printf("Erro na abertura do arquivo.\n");
                system("pause");
                exit(1);
            }
            inicio = criar();

            while(fread(&conteudo,sizeof(struct Carro),1,arq) == 1){

                    inicio = inserir(inicio,conteudo);
                    fflush(stdin);
            }

            imprimir(inicio);
            desalocar(inicio);

fclose(arq);
return 0;
}
