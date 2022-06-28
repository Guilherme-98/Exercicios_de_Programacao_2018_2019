#include<stdio.h>
int main (){
    float nota1, nota2, nota3, nota4, media, exame;
    printf("Informe a nota da primeira prova:");
    scanf("%f",&nota1);
    printf("Informe a nota da segunda prova:");
    scanf("%f",&nota2);
    printf("Informe a nota da terceira prova:");
    scanf("%f",&nota3);
    printf("Informe a nota da quarta prova:");
    scanf("%f",&nota4);
        media = (nota1 + nota2 + nota3 + nota4)/4;
            if(media < 7.0){
                printf("Informe a nota do exame:");
                scanf("%f",&exame);
                    media = (media + exame)/2;
                        if(media >= 5.0){
                            printf("A media do aluno foi:%.2f\n",media);
                            printf("O aluno foi aprovado no exeme.\n");
                        }
                        else{
                            printf("A media do aluno foi:%.2f\n",media);
                            printf("O aluno não foi aprovado.\n");
                        }
            }
            else{
                printf("A media do aluno foi:%.2f\n",media);
                printf("O aluno foi aprovado.\n");
            }
return 0;
}
