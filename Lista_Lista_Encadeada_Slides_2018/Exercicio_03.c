#include<stdio.h>
#include<stdlib.h>
struct Elemento{
    int num;
    struct Elemento *prox;
};
struct Elemento *inserir(struct Elemento *inicio,int valor){
    struct Elemento *aux;
    struct Elemento *aux2;
        if(inicio == NULL){
            inicio = (struct Elemento*)malloc(sizeof(struct Elemento));
            inicio->num = valor;
            inicio->prox = NULL;
        }
        else{
            aux = inicio;
                while(aux != NULL){
                    if(aux->num == valor){
                        printf("Numero ja inserido.\n");
                            return inicio;
                    }
                    aux = aux->prox;
                }
            aux = inicio;
                while(aux->prox != NULL){
                    aux = aux->prox;
                }
                aux2 = (struct Elemento*)malloc(sizeof(struct Elemento));
                aux2->num = valor;
                aux2->prox = NULL;
                aux->prox = aux2;
        }
        printf("Numero inserido com sucesso.\n");
    return inicio;
}
void imprimir(struct Elemento *inicio){
    struct Elemento *aux;
        aux = inicio;
        printf("Lista:");
            while(aux != NULL){
                printf("%d ",aux->num);
                aux = aux->prox;
            }
            printf("\n\n");
}
void desalocar(struct Elemento *inicio){
    struct Elemento *aux;
        aux = inicio;
            while(inicio != NULL){
                aux = aux->prox;
                free(inicio);
                inicio = aux;
            }
}
struct Elemento *inverter(struct Elemento *inicio){
    struct Elemento *aux;
    struct Elemento *aux_ant;


            aux_ant = inicio;
            aux = inicio->prox;
            inicio = inicio->prox;
            aux_ant->prox = NULL;

                while(inicio != NULL){
                    inicio = inicio->prox;
                    aux->prox = aux_ant;

                    aux_ant = aux;
                    aux = inicio;
                }
                inicio = aux_ant;

        return inicio;
}
int main (){
    struct Elemento *inicio;
    int valor;

    inicio = NULL;

        while(1){
            printf("*******************\n");
            printf("Inserir numero:");
            scanf("%d",&valor);

                if(valor >= 0){
                    inicio = inserir(inicio,valor);
                }
                if(valor < 0){
                    inicio = inverter(inicio);
                    imprimir(inicio);
                    desalocar(inicio);
                        return 0;
                }
        }
return 0;
}
