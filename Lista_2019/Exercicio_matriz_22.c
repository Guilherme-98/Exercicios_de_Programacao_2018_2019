#include<stdio.h>
int main (){
    int idade[8], i,matriz[8][5], j, contador=0, num, igual[5], media=0, divisor=0, provas=0;
    char d[5][10], str[10];
        for(i=0; i<8; i++){
            printf("Forneca a idade do aluno %d: ",i+1);
            scanf("%d",&idade[i]);
        }
        for(i=0; i<5; i++){
            printf("Forneca a disciplina %d: ", i+1);
            scanf("%s",d[i]);
        }
        for(i=0; i<8; i++){
            for(j=0; j<5; j++){
                printf("Fornca a quantidade de provas que o aluno %d fez na disciplina %d: ", i+1, j+1);
                scanf("%d",&matriz[i][j]);
            }
        }

        // Questao A

            printf("\nForneca a disciplina que deseja localizar: ");
            scanf("%s",str);

                for(i=0; i<5; i++){
                    igual[i]=strcmp(str,d[i]);
                }
                for(i=0; i<5; i++){
                    if(igual[i] == 0){
                        num = i;
                    }
                }

                for(i=0; i<8; i++){
                    if(idade[i] >= 18 && idade[i] <=25 && matriz[i][num] >=2){
                        contador++;
                    }
                }

                    printf("\n\nA quantidade de aluno:%d\n\n",contador);

        //Questao B

            for(i=0; i<8; i++){
                for(j=0; j<5; j++){
                        if(matriz[i][j] < 3){
                            printf("Numero do aluno:%d\n",i+1);
                            printf("Disciplina:%s\n",d[j]);
                        }
                            printf("\n");
                }

            }


        // Questao C

            for(i=0; i<8; i++){
                provas=0;
                for(j=0; j<5; j++){
                        if(matriz[i][j] == 0){
                            provas++;
                        }
                }
                    if(provas == 0){
                        media = media + idade[i];
                        divisor++;
                    }
            }
                media = media / divisor;
                printf("\nA media:%d\n",media);

return 0;
}
