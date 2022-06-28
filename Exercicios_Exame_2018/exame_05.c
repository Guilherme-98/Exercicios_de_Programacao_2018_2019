#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
enum menu{INSERIR=1, DIVIDIR, RELIGAR, SAIR};
typedef struct elemento{
    int num;
    struct elemento *prox;
}No;
No *criar(){
 return NULL;
}
No *inserir(No *inicio, int num){
if( inicio == NULL ) {
		inicio = (No*)malloc(sizeof(No));
		inicio->num = num;
		inicio->prox = NULL;
	} else {
		bool tem = false;

		No* aux;
		No* aux2;
		aux = inicio;
		while(aux->prox != NULL) {
			if(aux->num == num)
				tem = true;
			aux = aux->prox;
		}

		if(aux->num == num)
			tem = true;

		if(!tem) {
			aux2 = (No*)malloc(sizeof(No));
			aux2->num = num;
			aux2->prox = NULL;
			aux->prox = aux2;
		}
	}

    return inicio;
}

void *imprimirpar(No *inicio){
    No *aux;
    aux = inicio;
    printf("Lista Par:");
    while(aux != NULL){
            if(aux->num %2 == 0)
            printf("%d-", aux->num);
            aux = aux->prox;
    }
    printf("\n\n");
}
void *imprimirimpar(No *inicio){
    No *aux;
    aux = inicio;
    printf("Lista impar:");
    while(aux != NULL){
            if(aux->num %2 != 0)
            printf("%d-", aux->num);
            aux = aux->prox;
    }
    printf("\n\n");
}
void *imprimir(No *inicio){
    No *aux;
    aux = inicio;
    printf("Lista:");
    while(aux != NULL){
            if(aux->num %2 != 0){
            printf("%d-", aux->num);
            }


            aux = aux->prox;
    }
    printf("\n\n");
}


No *desalocar(No *inicio){
    No *aux;
    aux = inicio;
    while(aux != NULL){
        inicio = inicio->prox;
        free(aux);
        aux = inicio;
    }
}
int main (){
    int contador =0;
    No *inicio;
    enum menu;
    bool exe = true;
    int op, num;

    inicio = criar();

        printf("********************************\n");
        printf("*                              *\n");
        printf("*         1- Inserir           *\n");
        printf("*         2- Dividir           *\n");
        printf("*         3-Religar            *\n");
        printf("*         4- Sair              *\n");
        printf("********************************\n");

        do {
            printf("Escolha uma opcao: ");
            scanf("%d", &op);
        }while(op<0 || op>5);

        while (op){
            switch(op){

                case INSERIR:
                    fflush(stdin);
                    printf("Forneca um numero: ");
                    scanf("%d", &num);
                    fflush(stdin);

                    inicio = inserir(inicio, num);
                    contador++;
                    break;

                case DIVIDIR:
                    if (contador == 0){
                        printf("\nLista vazia\n");
                    }
                    printf("\n");
                    imprimirpar(inicio);
                    printf("\n");
                    imprimirimpar(inicio);
                    printf("\n");

                    break;

                case RELIGAR:
                    printf("\n");
                    imprimir(inicio);
                    printf("\n");
                    imprimirpar(inicio);
                    printf("\n");
                    break;

                case SAIR:
                    exit(0);
                    break;

                default:
                    printf("Operacao invalida. Tente Novamente!\n");
                    break;
            }
        printf("********************************\n");
        printf("*                              *\n");
        printf("*         1- Inserir           *\n");
        printf("*         2- Dividir           *\n");
        printf("*         3-Religar            *\n");
        printf("*         4- Sair              *\n");
        printf("********************************\n");

        do {
            printf("Escolha uma opcao: ");
            scanf("%d", &op);
        }while(op<0 || op>5);

        }
    desalocar(inicio);

return 0;
}


