#include<stdio.h>
#include<string.h>
struct Aluno{
    char nome[25];
    char matricula[25];
    float nota[4];
};
int main (){
    int i,j,soma=0,aux=0,aux2,aux3;
    float Media[5],nota1,maior,menor;
    char situacao[5][25];
    struct Aluno a[5];

     nota1 = 0;

    for(i=0;i<5;i++){
        fflush(stdin);
        printf("Informe o nome do aluno:");
        fgets(a[i].nome,25,stdin);
        fflush(stdin);
        printf("Informe a matricula do aluno:");
        fgets(a[i].matricula,25,stdin);

        for(j=0;j<4;j++){
            printf("Informe a nota da %do prova:",j+1);
            scanf("%f",&a[i].nota[j]);
            //Maior nota da primeira prova
                    if(a[i].nota[0] > nota1){
                        nota1 = a[i].nota[0];
                        aux = i;
                    }
            //Calculo da media
            soma  = soma + a[i].nota[j];
        }
        Media[i] = soma/4;
        soma = 0;
    }
    //Maior media e Menor media
    maior = Media[0];
    menor = Media[0];
    aux2 = 0;
    aux3 = 0;

    for(i=0;i<5;i++){
        if(Media[i] > maior){
            maior = Media[i];
            aux2 = i;
        }
        if(Media[i] < menor){
            menor = Media[i];
            aux3 = i;
        }
        if(Media[i]>=6){
            strcpy(situacao[i],"Aprovado");
        }else{
            strcpy(situacao[i],"Reprovado");
        }
    }


    for(i=0;i<5;i++){
        printf("\n");
        printf("Nome:%s",a[i].nome);
        printf("Matricula:%s",a[i].matricula);
        printf("Media:%.2f\n",Media[i]);
        printf("Situacao:%s\n",situacao[i]);

    }
    printf("\nA maior nota da primeira prova:%.2f de %s",nota1,a[aux].nome);
    printf("O aluno com a maior media:%.2f de %s",maior,a[aux2].nome);
    printf("O aluno com a menor media:%.2f de %s",menor,a[aux3].nome);
    printf("\n\n");


return 0;
}
