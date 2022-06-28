#include<stdio.h>
#include<string.h>
    struct Aluno{
        char nome[20];
        char curso[20];
        float nota[4];
        float media;
        char situacao[20];
    };
int main (){
    int i, soma=0;
    struct Aluno dados;

    printf("Informe o nome do aluno: ");
    fgets(dados.nome,20,stdin);

    printf("Informe o curso: ");
    fgets(dados.curso,20,stdin);

    for(i=0;i<4;i++){
        printf("Informe %do nota:",i+1);
        scanf("%f",&dados.nota[i]);
    }

    for(i=0;i<4;i++){
        soma = soma + dados.nota[i];
    }
        dados.media = soma / 4;

        if(dados.media >= 7){
            strcpy(dados.situacao, "Aprovado");
        }
        if(dados.media >=3 && dados.media <7){
            strcpy(dados.situacao, "Exame");
        }
        if(dados.media < 3){
            strcpy(dados.situacao, "Reprovado");
        }

        printf("\n\nNome:%s",dados.nome);
        printf("Curso:%s",dados.curso);
        printf("Media:%.2f\n",dados.media);
        printf("Situacao:%s\n\n",dados.situacao);
return 0;
}
