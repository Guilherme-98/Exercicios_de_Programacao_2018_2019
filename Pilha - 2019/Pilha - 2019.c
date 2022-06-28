#include <stdio.h>
#include <stdlib.h>
struct Element{
    int x;
    struct Element *next;
};
struct Stack{
    int size;
    struct Element *top;
};
void Inicializar(struct Stack *p){
    p->top = NULL;
    p->size = 0;
}
int Verificador(struct Stack *p){
    if(p->top == NULL || p->size == 0){
        printf("Pilha vazia.\n");
            return 1;
    }else{
        printf("Pilha nao esta vazia.\n");
            return 0;
    }
}
void Push(struct Stack *p){
    int num;
    struct Element *no = (struct Element *)malloc(sizeof(struct Element));
        if(p == NULL){
            printf("Erro na memoria.\n");
        }else{
            printf("Forneca um valor: ");
            scanf("%d",&num);
            no->x = num;
            no->next = p->top;
            p->top = no;
            (p->size)++;
            printf("Tamanho da lista: %d\n", p->size);
        }
}
int Pop(struct Stack *p){
    int valor;
    struct Element *aux = (struct Element *)malloc(sizeof(struct Element));
        if(p->top == NULL){
            printf("Pilha vazia.\n");
            return 0;
        }else{
            valor = p->top->x;
            aux = p->top;
            p->top = p->top->next;
            (p->size)--;
            printf("Tamanho da lista: %d\n", p->size);
            free(aux);
            return valor;
        }
}
void Topo(struct Stack *p){
    if(p->top == NULL){
        printf("Pilha vazia.\n");
    }else{
        printf("Elemento no topo:%d\n",p->top->x);
    }
}
void desalocar(struct Stack *p){
    struct Element *aux;
    aux = p->top;
    while(aux != NULL){
        p->top = p->top->next;
        free(aux);
        aux = p->top;
    }
}
int main(){
    int op, aux;
    struct Stack p;
    Inicializar(&p);
        while(1){
            printf("*************************************\n");
            printf("* 0 - SAIR                          *\n");
            printf("* 1 - EMPILHAR                      *\n");
            printf("* 2 - DESEMPILHAR                   *\n");
            printf("* 3 - ELEMENTO NO TOPO              *\n");
            printf("* 4 - DESALOCAR                     *\n");
            printf("* 5 - ESTADO DA PILHA               *\n");
            printf("*************************************\n");
            printf("Escolha uma opcao:");
            scanf("%d",&op);
            printf("\n");
            switch (op){
                case 0:
                    system("cls");
                    desalocar(&p);
                    printf("O programa fechou.\n");
                        return 0;
                case 1:
                    system("cls");
                    Push(&p);
                        break;
                case 2:
                    system("cls");
                    aux = Pop(&p);
                    printf("Elemento %d removido da lista.\n", aux);
                        break;
                case 3:
                    system("cls");
                    Topo(&p);
                        break;
                case 4:
                    system("cls");
                    desalocar(&p);
                    printf("Deslocamento de memoria foi realizado.\n");
                        return 0;
                case 5:
                    system("cls");
                    Verificador(&p);
                        break;
                default: printf("Opcao Invalida.\n");
                        break;
            }
        }
        return 0;
}
