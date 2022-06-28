#include<stdio.h>
#include<stdlib.h>
struct Lista{
    int valor;
    struct Lista *prox;
};
struct Lista *criarlista(){
    printf("Lista criada com sucesso.\n\n");
    return NULL;
}
void deslocar(struct Lista *inicio){
    struct Lista *aux;
    aux = inicio;
        while(inicio != NULL){
            aux = aux->prox;
            free(inicio);
            inicio = aux;
        }
}
struct Lista *inserir (struct Lista *inicio, int valor){
    struct Lista *aux;
    struct Lista *aux2;
    if(inicio == NULL){
        inicio = (struct Lista*)malloc(sizeof(struct Lista));
        inicio->valor = valor;
        inicio->prox = NULL;
    }
    else{
        aux = inicio;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux2 = (struct Lista*)malloc(sizeof(struct Lista));
        aux2->valor=valor;
        aux2->prox=NULL;
        aux->prox = aux2;
    }
    printf("Valor inserido com sucesso.\n\n");
return inicio;
}
void imprimir(struct Lista *inicio){
    struct Lista *aux;
        aux = inicio;
        while(aux != NULL){
            printf("%d ",aux->valor);
            aux = aux->prox;
        }
        printf("\n");
}
struct Lista *buscar(struct Lista *inicio, int num){
    struct Lista *aux;

        aux = inicio;
        while(aux != NULL){
                if(aux->valor == num){
                    printf("\nNumero encontrado.\n");
                    return aux;
                }
            aux = aux->prox;
        }
return NULL;
};

struct Lista *excluir (struct Lista *inicio, int num){
    struct Lista *aux;
    struct Lista *aux_ant;

    aux = inicio;
    aux_ant = NULL;

        while(aux != NULL && aux->valor != num){
            aux_ant = aux;
            aux = aux->prox;
        }
        if(aux == NULL){
            printf("Numero nao encontrado.\n");
                return inicio;
        }
        if (aux_ant == NULL){
            aux = aux->prox;
            printf("Numero excluido com sucesso.\n");
                return aux;
        }
        else{
            aux_ant->prox = aux->prox;
            printf("Numero excluido com sucesso.\n");
        }
            free(aux);
                return inicio;
};
int main (){
    struct Lista *inicio;
    struct Lista *resultado;
    int valor,op,num;

    while(1){
        printf("*****************\n");
        printf("* 0- SAIR       *\n");
        printf("* 1- CRIAR      *\n");
        printf("* 2- INSERIR    *\n");
        printf("* 3- IMPRIMIR   *\n");
        printf("* 4- BUSCAR     *\n");
        printf("* 5- EXCLUIR    *\n");
        printf("*****************\n");
        printf("Escolha:");
        scanf("%d",&op);

            switch(op){

                case 0:
                    deslocar(inicio);
                        return 0;

                case 1:
                inicio = criarlista();
                    break;

                case 2:
                    printf("Informe o valor:");
                    scanf("%d",&valor);
                    inicio = inserir(inicio,valor);
                        break;

                case 3:
                    imprimir(inicio);
                        break;

                case 4:
                    printf("Forneca o numero que deseja procurar na lista:");
                    scanf("%d",&num);
                    resultado = buscar(inicio,num);
                        if(resultado == NULL){
                            printf("\nNumero nao encontrado.\n");
                        }
                        break;

                case 5:
                        printf("Informe o numero que deseja excluir:");
                        scanf("%d",&num);
                        inicio = excluir(inicio,num);
                            break;

                default:
                    printf("Opcao invalida.\n\n");
                        break;
            }
    }
return 0;
}
