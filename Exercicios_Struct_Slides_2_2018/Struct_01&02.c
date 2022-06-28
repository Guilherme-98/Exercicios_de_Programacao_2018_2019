#include<stdio.h>
#include<string.h>
struct aluno{
    char nome[25];
    char matricula[25];
    char curso[25];
};

void ordernarpornome(struct aluno v[], int n){
    int i, j;
    struct aluno aux;
    for(i=1;i<n;i++){
        aux = v[i];
        for(j=i;(j>0) && (strcmp(aux.nome,v[j-1].nome)<0);j--)
            v[j]=v[j-1];
            v[j]=aux;
    }
}
int main (){
    int i,j;
    char aux[25];
    struct aluno a[5];

    for(i=0;i<5;i++){
        fflush(stdin);
        printf("Informe o nome do aluno:");
        fgets(a[i].nome,25,stdin);
        fflush(stdin);
        printf("Informe a matricula do aluno:");
        fgets(a[i].matricula,25,stdin);
        fflush(stdin);
        printf("Informe o curso do aluno:");
        fgets(a[i].curso,25,stdin);
    }
    ordernarpornome(a,5);

    for(i=0;i<5;i++){
        printf("\n\n");
        printf("Nome:%s",a[i].nome);
        printf("Matricula:%s",a[i].matricula);
        printf("Curso:%s",a[i].curso);
    }

return 0;
}
