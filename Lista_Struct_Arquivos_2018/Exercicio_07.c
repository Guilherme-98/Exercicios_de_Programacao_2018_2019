#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Aluno{
    char nome[40];
    char nascimento[15];
    float nota;
};
int main (){
    int cont,i,maior,aux;

    printf("Informe a quantidade de alunos:");
    scanf("%d",&cont);

    struct Aluno a[cont];

    for(i=0;i<cont;i++){
        fflush(stdin);
        printf("Informe o nome do aluno:");
        gets(a[i].nome);
        fflush(stdin);

        printf("Informe a data de nasciemnto do aluno:");
        gets(a[i].nascimento);
        fflush(stdin);

        printf("Informe a nota final do aluno:");
        scanf("%f",&a[i].nota);

        printf("\n");
    }

    FILE *arq;
    arq = fopen("Conteudos.bin","wb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }

    fwrite(&a,sizeof(struct Aluno),cont,arq);
    fclose(arq);


    arq = fopen("Conteudos.bin","rb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }

    fread(&a,sizeof(struct Aluno),cont,arq);

    fclose(arq);

    maior = 0;
    for(i=0;i<cont;i++){
            if(a[i].nota > maior){
                maior = a[i].nota;
                aux = i;
            }
    }

    printf("\nO aluno:%s foi o que deve a maior nota:%.2f\n\n",a[aux].nome,a[aux].nota);

return 0;
}
