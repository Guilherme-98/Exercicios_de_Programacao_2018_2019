#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Element{
    int conta;
    float valor;
    struct Element *next;
};

struct Lista{
    struct Element *front;
    struct Element *back;
    int size;
};

void Inicializar (struct Lista *p){
    p->back = NULL;
    p->front = NULL;
    p->size = 0;
}

int isEmpty(struct Lista *p)
{
    if (p->front == NULL){
        return 1;
    }else{ 
        return 0;
    }
}

void Inserir(struct Lista *p, int num, float val){
    struct Element *novo;
    novo = (struct Element *) malloc(sizeof(struct Element));
    novo->conta = num;
    novo->valor = val;
    novo->next = NULL;
    if (isEmpty(p))
    {
        p->front = novo;
        p->back = novo;
    }
    else
    {
        struct Element *aux;
        aux = p->front;
        while (aux->next != NULL)
        {
            aux = aux->next;
        }
        aux->next = novo;
        p->back = novo;
    }
    p->size++;
    printf("Tamanho da lista:%d\n", p->size);
}  
  
int add_before(struct Lista *p, float val, int num, int index){
    struct Element *novo;
    struct Element *aux, *aux_ant;
    int cont=0;
    novo = (struct Element *)malloc(sizeof(struct Element));
    if(isEmpty(p)){
        printf("A lista esta vazia.\n");
        return -1;
    }else if(p->size == 1){
        printf("A lista precisa ter mais de 1 elemento.\n");
        return -1;
    }
    if(index > p->size){
        printf("Indice inserido invalido.\n");
        return -1;
    }
    novo->valor = val;
    novo->conta = num;
    aux_ant = p->front;
    aux = p->front;
    if(index == 0){
        aux = p->front;
        novo->next = aux;
        p->front = novo;
    }else if(index == 1){
        aux = aux->next;
        novo->next = aux;
        aux_ant->next = novo;
    }else{
        aux = aux->next;
        cont++;
        while(cont < index){
            aux_ant = aux_ant->next;
            aux = aux->next;
            cont++;
        }
        novo->next = aux;
        aux_ant->next = novo;
    }
    p->size++;
    printf("Tamanho da lista:%d\n", p->size);
    return 0;
}

int add_after(struct Lista *p, float val, int num, int index){
    struct Element *novo, *aux, *aux_ant;
    int cont=0;
    novo = (struct Element *)malloc(sizeof(struct Element));
    if(isEmpty(p)){
        printf("A lista esta vazia.\n");
        return -1;
    }
    if(index > p->size){
        printf("Indice inserido invalido.\n");
        return -1;
    }
    novo->valor = val;
    novo->conta = num;
    aux_ant = p->front;
    aux = p->front;
    if(index == 0){
        aux = aux->next;
        novo->next = aux;
        aux_ant->next = novo;
    }else if(index == 1){
        aux = aux->next;
        aux_ant = aux_ant->next;
        aux_ant->next = novo;
        novo->next = aux;
    }else{
        aux = aux->next;
        cont++;
        while(cont <= index){
            aux_ant = aux_ant->next;
            aux = aux->next;
            cont++;
        }
        novo->next = aux;
        aux_ant->next = novo;
    }
    
    p->size++;
    printf("Tamanho da lista: %d\n", p->size);
    return 0;
}

void remove_index(struct Lista *p, int index){
    int cont=0;
    struct Element *aux, *aux_ant, *remove;
    aux = p->front;
    aux_ant = p->front;
    remove = p->front;
    if(index > p->size || p->size == 0){
        printf("Indice inserido invalido ou lista vazia.\n");
        return;
    }
    if(index == 0){
        aux = aux->next;
        p->front = aux;
        free(remove);
    }else{
        aux = aux->next;
        remove = aux->next;
        cont++;
        while(cont < index){
            aux_ant = aux_ant->next;
            aux = aux->next;
            remove = remove->next;
            cont++;
        }
        aux_ant->next = remove;
        free(aux);
    }
    p->size--;
    printf("Tamanho da lista: %d\n", p->size);
}

void remove_value(struct Lista *p, float val, int num){
    struct Element *aux, *aux_ant, *remove;
    if(p->size == 0){
        printf("A lista esta vazia.\n");
        return;
    }
    aux = p->front;
    remove = p->front;
    aux_ant = p->front;
    if (aux->conta == num && aux->valor == val){
        aux = aux->next;
        p->front = aux;
        free(remove);
    }
    else
    {
        aux = aux->next;
        remove = aux->next;
        if (remove == NULL)
        {
            aux_ant->next = NULL;
            free(aux);
            p->back = aux_ant;
        }
        else
        {
            while (aux != NULL){
                aux_ant = aux_ant -> next;
                aux = aux->next;
                remove = remove->next;
                if(aux->conta == num && aux->valor == val) break;
            }
        }
        if (aux == NULL){
            printf("Elementos inseridos invalidos.\n");
            return;
        }
        aux_ant->next = remove;
        free(aux);
    }
    p->size--;
    printf("Tamanho da lista:%d\n", p->size);
}
 
void imprimir(struct Lista *p){
    int i=0;
    struct Element *aux;
    if(p->size == 0){
        printf("A lista esta vazia.\n");
    }else{
        aux = p->front;
            while (aux != NULL){
                printf("INT: %d -- FLOAT: R$%.2lf -- Indice: %d\n", aux->conta, aux->valor, i);
                aux = aux->next;
                i++;
            }
    }
}

void ind(struct Lista *p, int num, float val){
    struct Element *aux;
    int cont=0;
    if(p->size == 0){
        printf("A lista esta vazia.\n");
    }
    aux = p->front;
    while(aux->conta != num && aux->valor != val){
        aux = aux->next;
        cont++;
        if(aux == NULL){
            printf("Os valores inseridos sao invalidos.\n");
        }
    }
    printf("Elemento encontrado no indice %d.\n", cont);
}
void frontElement(struct Lista *p){
    if(p->size == 0){
        printf("A lista esta vazia.\n");
    }else{
        printf("INT: %d\nFLOAT: R$%.2f\n", p->front->conta, p->front->valor);
    }
}

void backElement(struct Lista *p){
    if(p->size == 0){
        printf("A lista esta vazia.\n");
    }else{
        printf("INT: %d\nFLOAT: R$%.2f\n", p->back->conta, p->back->valor);
    }
}

int Exist(struct Lista *p, float val, int num){
    struct Element *aux;
    if(p->size == 0){
        printf("A lista esta vazia.\n");
        return -1;
    }
    aux = p->front;
    while(aux->conta != num && aux->valor != val){
        aux = aux->next;
        if(aux == NULL){
            printf("Elementos nao encontrados na lista.\n");
            return -1;
        }
    }
    printf("Elementos encontrados na lista.\n");
    return 0;
}

void Desalocar(struct Lista *p){
    struct Element *aux, *aux_prox;
    if(p->size == 0){
        printf("A lista esta vazia.\n");
        return;
    }
    aux = p->front;
    while(aux != NULL){
        aux_prox = aux->next;
        free(aux);
        aux = aux_prox;
    }
    return;
}

int main(){
    struct Lista p;
    int op, op2, op3, conta, indice, verif1, verif3, verif_remov1;
    float val, verif2, verif4, verif_remov2;
    Inicializar(&p);
    while(1){
        printf("***************MENU***************\n");
        printf("* 0 - SAIR                       *\n");
        printf("* 1 - INSERIR PRIMEIRO ELEMENTO  *\n");
        printf("* 2 - INSERIR NO COMECO          *\n");
        printf("* 3 - INSERIR NO FINAL           *\n");
        printf("* 4 - REMOVER INDICE             *\n");
        printf("* 5 - REMOVER VALORES            *\n");
        printf("* 6 - VERIFICAR INDICE           *\n");
        printf("* 7 - VERIFICAR VALORES          *\n");
        printf("* 8 - ELEMENTO NA FRENTE         *\n");
        printf("* 9 - ELEMENTO NO FINAL          *\n");
        printf("* 10 - VERIFICAR SE ESTA VAZIA   *\n");
        printf("* 11 - IMPRIMIR                  *\n");
        printf("* 12 - DESALOCAR LISTA           *\n");
        printf("**********************************\n");
        printf("Selecione uma opcao:");
        scanf("%d", &op);
        printf("\n");
        switch(op){
            case 0:
                Desalocar(&p);
                printf("O programa encerrou.\n");
                system("pause");
                    return 0;
            case 1:
                system("cls");
                printf("Insira o numero da int:");
                scanf("%d", &conta);
                printf("Insira o numero float:");
                scanf("%f", &val);
                Inserir(&p, conta, val);
                    break;
            case 2:
                system("cls");
                printf("Insira o numero int:");
                scanf("%d", &conta);
                printf("Insira o numero float:");
                scanf("%f", &val);
                printf("Indice:");
                scanf("%d", &op2);
                add_before(&p, val, conta, op2);
                    break;
            case 3:
                system("cls");
                printf("Insira o numero int:");
                scanf("%d", &conta);
                printf("Insira o numero float:");
                scanf("%f", &val);
                printf("Indice:");
                scanf("%d", &op3);
                add_after(&p, val, conta, op3);
                    break;
            case 4:
                system("cls");
                printf("Digite o indice para remover seu respectivo elemento:");
                scanf("%d", &indice);
                remove_index(&p, indice);
                    break;
            case 5:
                system("cls");
                printf("Insira o numero int:\n");
                printf("CONTA: ");
                scanf("%d", &verif_remov1);
                printf("Insira o numero float ");
                scanf("%f", &verif_remov2);
                remove_value(&p, verif_remov2, verif_remov1);
                    break;
            case 6:
                system("cls");
                printf("Insira o numero int para verificacao:");
                scanf("%d", &verif1);
                printf("Insira o numero float verificacao:");
                scanf("%f", &verif2);
                ind(&p, verif1, verif2);
                    break;
            case 7:
                system("cls");
                printf("Insira o numero int:");
                scanf("%d", &verif3);
                printf("Insira o numero float");
                scanf("%f", &verif4);
                Exist(&p, verif4, verif3);
                    break;
            case 8:
                system("cls");
                frontElement(&p);
                    break;
            case 9:
                system("cls");
                backElement(&p);
                    break;
            case 10:
                system("cls");
                if(isEmpty(&p)){
                    printf("Lista vazia.\n");
                }else{
                    printf("A elemento(s) na lista.\n");
                }
                    break;
            case 11:
                system("cls");
                imprimir(&p);
                    break;
            case 12:
                system("cls");
                Desalocar(&p);
                    break;
             default:
                printf("Opcao invalida.\n");
                    break;
        }
    }
    return 0;
}