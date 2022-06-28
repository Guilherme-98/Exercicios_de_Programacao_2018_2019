#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Aluno{
    char nome[50];
    char curso[50];
    int matricula;
    int idade;
    struct Aluno *prox;
};
struct Aluno *criar(){
    printf("Lista criada com sucesso.\n");
    return NULL;
}
void desalocar(struct Aluno *inicio){
    struct Aluno *aux;
        aux = inicio;
        while(inicio != NULL){
            aux = aux->prox;
            free(inicio);
            inicio = aux;
        }
}
struct Aluno *inserir(struct Aluno *inicio, char nome[], char curso[], int matricula, int idade){
    struct Aluno *aux;
    struct Aluno *aux2;
    if(inicio == NULL){
        inicio = (struct Aluno*)malloc(sizeof(struct Aluno));
        strcpy(inicio->nome,nome);
        strcpy(inicio->curso,curso);
        inicio->matricula = matricula;
        inicio->idade = idade;
        inicio->prox = NULL;
    }
    else{
        aux = inicio;
            while(aux->prox != NULL){
                aux = aux->prox;
            }

            aux2 = (struct Aluno*)malloc(sizeof(struct Aluno));
            strcpy(aux2->nome,nome);
            strcpy(aux2->curso,curso);
            aux2->matricula = matricula;
            aux2->idade = idade;
            aux2->prox = NULL;
            aux->prox = aux2;

    }
    printf("Aluno inserido com sucesso.\n");
return inicio;
}
struct Aluno *excluir (struct Aluno *inicio, char nome[]){
    struct Aluno *aux;
    struct Aluno *aux_ant;
    aux = inicio;
    aux_ant = NULL;

    while(aux != NULL && strcmp(aux->nome,nome) != 0){
        aux_ant = aux;
        aux = aux->prox;
    }
    if(aux == NULL){
        printf("Aluno nao encontrado.\n");
        return inicio;
    }
    if(aux_ant == NULL){
        aux = aux->prox;
        printf("Aluno excluido com sucesso.\n");
        return aux;
    }else{
        aux_ant->prox = aux->prox;
        printf("Aluno excluido com sucesso.\n");
    }
        free(aux);
        return inicio;
}
struct Aluno *buscar(struct Aluno *inicio, char nome[]){
    struct Aluno *aux;
    aux = inicio;
    while(aux != NULL){
        if(strcmp(aux->nome,nome) == 0){
            printf("Aluno encontrado.\n");
            printf("Nome:%s",aux->nome);
            printf("Curso:%s",aux->curso);
            printf("Matricula:%d\n",aux->matricula);
            printf("Idade:%d",aux->idade);
            printf("\n\n");
                return inicio;
        }
        aux = aux->prox;
    }
return NULL;
}
void imprimir(struct Aluno *inicio){
    struct Aluno *aux;
    aux = inicio;
        while(aux != NULL){
            printf("Nome:%s",aux->nome);
            printf("Curso:%s",aux->curso);
            printf("Matricula:%d\n",aux->matricula);
            printf("Idade:%d",aux->idade);
            printf("\n\n");
            aux = aux->prox;
        }
}
int main (){
    struct Aluno *inicio;
    struct Aluno *resultado;
    char nome[50],curso[50];
    int op,matricula,idade;


        while(1){

            printf("***************\n");
            printf("* 0- SAIR     *\n");
            printf("* 1- CRIAR    *\n");
            printf("* 2- INSERIR  *\n");
            printf("* 3- IMPRIMIR *\n");
            printf("* 4- EXCLUIR  *\n");
            printf("* 5- BUSCAR   *\n");
            printf("***************\n");
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
                    printf("Forneca o nume do aluno:");
                    fflush(stdin);
                    fgets(nome,50,stdin);
                    printf("Forneca o curso do aluno:");
                    fflush(stdin);
                    fgets(curso,50,stdin);
                    printf("Forneca a matricula do aluno:");
                    scanf("%d",&matricula);
                    printf("Forneca a idade do aluno:");
                    scanf("%d",&idade);

                    inicio = inserir(inicio,nome,curso,matricula,idade);
                        break;


                case 3:
                    imprimir(inicio);
                        break;

                case 4:
                    printf("Informe o nome do aluno que deseja excluir:");
                    fflush(stdin);
                    fgets(nome,50,stdin);
                    inicio = excluir(inicio,nome);
                        break;

                case 5:
                    printf("Informe o nome do aluno que deseja:");
                    fflush(stdin);
                    fgets(nome,50,stdin);
                    resultado =  buscar(inicio,nome);
                        if(resultado == NULL){
                            printf("Aluno nao encontrado.\n");
                        }
                            break;

                default:
                    printf("Opcao invalida.\n");
                        break;
            }
        }
return 0;
}
