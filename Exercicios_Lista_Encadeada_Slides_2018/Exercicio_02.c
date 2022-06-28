#include<stdio.h>
#include<stdlib.h>
struct Elemento {
    int num;
    struct Elemento *prox;
};
struct Elemento *criar(){
    printf("Lista criada com sucesso.\n");
    return NULL;
}
struct Elemento *inserir(struct Elemento *inicio, int num){
    struct Elemento *aux;
    struct Elemento *aux2;
        if(inicio == NULL){
            inicio = (struct Elemento*)malloc(sizeof(struct Elemento));
            inicio->num = num;
            inicio->prox = NULL;
        }
        else{
            aux = inicio;
            while(aux != NULL){
                if(aux->num == num){
                    printf("Valor ja inserido.\n");
                    return inicio;
                }
                aux = aux->prox;
            }
            aux = inicio;
            while(aux->prox != NULL){
                aux = aux->prox;
            }
            aux2 = (struct Elemento*)malloc(sizeof(struct Elemento));
            aux2->num = num;
            aux2->prox = NULL;
            aux->prox = aux2;
        }
        printf("Valor inserido.\n");
return inicio;
}
void imprimir(struct Elemento *inicio){
    struct Elemento *aux;
    aux = inicio;
    while(aux != NULL){
        printf("%d ",aux->num);
        aux = aux->prox;
    }
    printf("\n");
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
int main (){
    struct Elemento *inicio;
    int op, valor;

    while(1){

    printf("******************\n");
    printf("* 0- SAIR        *\n");
    printf("* 1- CRIAR LISTA *\n");
    printf("* 2- INSERIR     *\n");
    printf("* 3 IMPRIMIR     *\n");
    printf("******************\n");
    printf("Escolher:");
    scanf("%d",&op);
    printf("\n");

        switch(op){

            case 0:
                desalocar(inicio);
                    return 0;

            case 1:
                inicio = criar();
                    break;

            case 2:
                printf("Informe o valor:");
                scanf("%d",&valor);
                inicio = inserir(inicio,valor);
                    break;

            case 3:
                imprimir(inicio);
                    break;

            default:
                printf("Opcao invalida.\n");
                    break;
        }
    }

return 0;
}
