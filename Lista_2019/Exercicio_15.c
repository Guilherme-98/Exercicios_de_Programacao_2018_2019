#include<stdio.h>
int main (){
    float media, F;
    printf("Infrome a media do aluno:");
    scanf("%f",&media);
    printf("Infrome a frequencia do aluno:");
    scanf("%f",&F);
        if(media >= 7.0 && F > 75){
            printf("Aluno aprovado.\n");
        }
        else if(media > 9.0){
            printf("Aluno aprovado.\n");
        }
        else if(media > 5.0 && F >= 75){
            printf("O aluno esta de recupercao.\n");
        }
        else{
            printf("O aluno esta reprovado.\n");
        }
return 0;
}
