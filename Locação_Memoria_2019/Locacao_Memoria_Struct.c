#include<stdio.h>
#include<stdlib.h>
struct Cliente{
    char nome[30];
    int idade;
};
void inserir(struct Cliente *a){
    printf("Forneca o nome:");
    fflush(stdin);
    gets((*a).nome);
    printf("Forneca a idade:");
    fflush(stdin);
    scanf("%d",&(*a).idade);
}
void imprimir(struct Cliente *a){
    printf("\nNome:%s\n",(*a).nome);
    printf("Idade:%d\n",(*a).idade);
}
int main (){
    int op, i=0,aux;
    struct Cliente *a;

    while(1){
            printf("***************\n");
            printf("* 0- SAIR     *\n");
            printf("* 1- INSERIR  *\n");
            printf("* 2- IMPRIMIR *\n");
            printf("***************\n");
            printf("Escolha:");
            scanf("%d",&op);
            printf("\n");
        switch(op){

            case 0:
                return 0;

            case 1:
                a = (struct Cliente *)malloc(sizeof(struct Cliente));
                inserir(&a[i]);
                i++;
                free(a);
                break;

            case 2:
                printf("Forneca a posicao do cliente que deseja imprimir:");
                fflush(stdin);
                scanf("%d",&aux);
                imprimir(&a[aux-1]);
                break;

            default:
                printf("Opcao Invalida.\n");
                break;
        }
    }

return 0;
}
