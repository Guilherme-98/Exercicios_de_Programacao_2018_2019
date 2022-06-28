#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Elemento{
    int num;
    struct Elemento *prox;
};
struct Elemento *criar(){
    printf("Lista criada com sucesso.\n");
    return NULL;
}
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
            while(aux->prox != NULL){
                aux = aux->prox;
            }
            aux2 = (struct Elemento*)malloc(sizeof(struct Elemento));
            aux2->num = valor;
            aux2->prox = NULL;
            aux->prox = aux2;
        }
        printf("Elemento inserido com sucesso.\n");
    return inicio;
}
struct Elemento *excluir(struct Elemento *inicio){
        inicio = inicio->prox;
        printf("Elemento excluido com sucesso.\n");
    return inicio;
}
bool verificar(struct Elemento *inicio){
    bool exe;
        if(inicio == NULL){
            exe = true;
        }
        else{
            exe = false;
        }
return exe;
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
void imprimir(struct Elemento *inicio){
    struct Elemento *aux;
        aux = inicio;
        printf("Fila:");
            while(aux != NULL){
                printf("%d ",aux->num);
                aux = aux->prox;
            }
            printf("\n");
}
int main (){
    struct Elemento *inicio;
    int op,num;
    bool resultado;

        while(1){
            printf("****************\n");
            printf("* 0- Sair      *\n");
            printf("* 1- CRIAR     *\n");
            printf("* 2- INSERIR   *\n");
            printf("* 3- EXCLUIR   *\n");
            printf("* 4- VERIFICAR *\n");
            printf("****************\n");
            printf("Escolha:");
            scanf("%d",&op);

                switch(op){

                    case 0:
                        desalocar(inicio);
                            return 0;

                    case 1:
                        inicio = criar();
                            break;

                    case 2:
                        printf("Informe o numero:");
                        scanf("%d",&num);
                        inicio = inserir(inicio,num);
                            break;

                    case 3:
                        inicio = excluir(inicio);
                        imprimir(inicio);
                            break;

                    case 4:
                        resultado = verificar(inicio);
                            if(resultado == true){
                                printf("A fila esta vazia.\n");
                            }
                            else{
                                printf("A fila nao esta vazia.\n");
                            }
                                break;
                    default:
                        printf("Opcao invalida.\n");
                            break;
                }
        }
return 0;
}
