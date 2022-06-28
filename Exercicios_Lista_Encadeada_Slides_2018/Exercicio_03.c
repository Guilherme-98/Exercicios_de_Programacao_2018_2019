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
struct Elemento *trocar(struct Elemento *inicio, int p1, int p2){
    struct Elemento *aux;
    int contador = -1;
    int x, y,exe;
        aux = inicio;
        while(aux != NULL){//VERIFICANDO SE EXISTE AS POSIÇÔES QUE O USUARIO INFORMOU
            contador++;
            aux = aux->prox;
        }
        if(contador < p1 && contador < p2){
            printf("Posicoes inexistentes na lista.\n");
                return inicio;
        }
        if(p1 > p2){//Pegando a menor posições para não ocorrer erro na hora de inverter valores
            exe = p1;
            p1 = p2;
            p2 = exe;
        }

        contador = -1;
        aux = inicio;
        while(aux != NULL){//Pegando os valores correspondentes ao que o usuario informou
            contador++;
            if(contador == p1){
                x = aux->num;

            }
            if(contador == p2){
                y = aux->num;
            }
            aux = aux->prox;
        }

        contador = -1;
        aux = inicio;
        while(aux != NULL){//Invertendo os valores
            contador++;
            if(contador == p1){
                aux->num = y;

            }
            if(contador == p2){
                aux->num = x;
            }
            aux = aux->prox;
        }
        return inicio;
}
int main (){
    struct Elemento *inicio;
    int op, valor,p1,p2;

    while(1){

    printf("*******************\n");
    printf("* 0- SAIR         *\n");
    printf("* 1- CRIAR LISTA  *\n");
    printf("* 2- INSERIR      *\n");
    printf("* 3- IMPRIMIR     *\n");
    printf("* 4- TROCAR ORDEM *\n");
    printf("*******************\n");
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

            case 4:
                printf("Informe a primeira posicao:");
                scanf("%d",&p1);

                printf("Informe a segunda posicao:");
                scanf("%d",&p2);
                inicio = trocar(inicio,p1,p2);
                    break;

            default:
                printf("Opcao invalida.\n");
                    break;
        }
    }

return 0;
}

