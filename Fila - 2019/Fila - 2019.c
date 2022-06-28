#include <stdio.h>
#include <stdlib.h>
struct Element{
    float x;
    struct Element *next;
};
struct Queue{
    int size;
    struct Element *front;
    struct Element *back;
};
void Iniciar(struct Queue *p){
    p->size = 0;
    p->front = p->back = NULL;
}
void Verificador(struct Queue *p){
    if(p->size == 0){
        printf("A Fila esta vazia.\n");
    }else{
        printf("A fila nao esta vazia.\n");
    }
}
void Push_back(struct Queue *p){
    struct Element *novo = malloc(sizeof(struct Element));
    float num;
        printf("Forneca um novo elemento na fila:");
        scanf("%f",&num);
        novo->x = num;
            if(p->size == 0){
                p->front = novo;
                p->back = novo;
            }else{
                p->back->next = novo;
                p->back = novo;
            }
        (p->size)++;
        printf("Tamanho atual da fila: %d\n",p->size);
}
float Pop_front(struct Queue *p){
    struct Element *aux = malloc(sizeof(struct Element));
    float v;
        v = p->front->x;
        aux = p->front;

             if(p->size == 0){
                printf("A fila esta vazia.\n");
             }
             else if(p->size == 1){
                p->back = p->front = NULL;
             }else{
                p->front = aux->next;
             }
             (p->size)--;
        printf("Tamanho atual da fila:%d\n",p->size);
        free(aux);
     return v;
}
void frontElement(struct Queue *p){
    if(p->size == 0){
        printf("A fila esta vazia.\n");
    }else{
        printf("Primeiro elemento da fila:%.2f\n", p->front->x);
    }
}
void backElement(struct Queue *p){
    if(p->size == 0){
        printf("A fila vazia.\n");
    }else{
        printf("Ultimo elemento da fila:%.2f\n", p->back->x);
    }
}
void Desaloc(struct Queue *p){
    struct Element *aux;
    struct Element *temp;
        aux = p->front;
        while(aux != NULL){
            temp = aux->next;
            free(aux);
            aux = temp;
        }
}
int main(){
    struct Queue p;
    int op;
    float n;
    Iniciar(&p);
        while(1){
            printf("**********************************\n");
            printf("* 0 - SAIR.                      *\n");
            printf("* 1 - ADICIONAR A FILA.          *\n");
            printf("* 2 - REMOVER DA FILA.           *\n");
            printf("* 3 - VERIFICAR SE ESTA VAZIA.   *\n");
            printf("* 4 - PRIMEIRO ELEMENTO.         *\n");
            printf("* 5 - ULTIMO ELEMENTO.           *\n");
            printf("**********************************\n");
            printf("Escolha uma opcao:");
            scanf("%d", &op);
            printf("\n");
                switch(op){
                    case 0:
                        system("cls");
                        Desaloc(&p);
                        printf("Fila desalocada com sucesso.\n");
                        printf("Progrma encerrado.\n");
                            return 0;
                    case 1:
                        system("cls");
                        Push_back(&p);
                            break;
                    case 2:
                        system("cls");
                        n = Pop_front(&p);
                        if(n != 0){
                        printf("Elemento:%.2f removido da fila.\n",n);
                        }
                            break;
                    case 3:
                        system("cls");
                        Verificador(&p);
                            break;
                    case 4:
                        system("cls");
                        frontElement(&p);
                            break;
                    case 5:
                        system("cls");
                        backElement(&p);
                            break;
                    default:
                        printf("Opcao invalida.\n");
                            break;
                }
        }
 return 0;
}
