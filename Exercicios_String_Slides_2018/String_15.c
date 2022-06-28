#include<stdio.h>
#include<string.h>
int main (){
    char palavra[50], tentativa[50],copiaPalavra[50];
    int i, fim = 0, encontrei;
    int n_tentativa = 0, limite_tentativa = 0, corretas = 0;
    char chute, c;

    // busca uma palavra
    strcpy(palavra,"cachorro");
    strcpy(copiaPalavra,palavra);

    // definir o limite de tentativas
    limite_tentativa = strlen(palavra) * 1.5;

    // armazena string com espaços com tamanho da palavra sorteada
    for(i=0;i<strlen(palavra);i++){
        tentativa[i] = ' ';
    }
        do{
            //apresenta cabeçalho do jogo
            system("cls");
            printf("\n     F O R C A   EM  C\n");
            printf("_______________________________________\n\n\n");

            //apresenta letras ja encontradas
            for(i=0;i<strlen(palavra);i++){
                printf(" %c  ",tentativa[i]);
            }
                printf("\n");


            //apresentar posicoes para letras

            for(i=0;i<strlen(palavra);i++){
                printf("___ ");
            }
                printf("\n");

            printf("\n\n_____________________________________\n\n");
            printf("Restantes:%d",limite_tentativa-n_tentativa);
            printf(" - Corretas:%d ",corretas);
            printf("\n\n______________________________________\n\n");

            //**************** RESPOSTAS DO JOGADOR ******************

            // Le respostas do jogador
            printf("\n\nEntre com uma letra (ou * para encerrar) + <enter>: ");
            scanf("%c", &chute);
            scanf("%c", &c);

            //Testa se a letra informada encontra-se na palavra escolhida
            encontrei = 0;
            for(i=0;i<strlen(palavra);i++)
                if(toupper(copiaPalavra[i]) == toupper(chute)){
                    copiaPalavra[i] = '*';
                    tentativa[i] = toupper(chute);
                    corretas++;
                    encontrei = 1;
                }

                if(encontrei == 0){
                    n_tentativa++;
                }
                if(n_tentativa >= limite_tentativa || corretas == strlen(palavra) || chute == '*'){
                    fim = 1;
                }

        }while(fim == 0);

        system("cls");
        //Mensagem na conclusao do jogo
        if(n_tentativa >= limite_tentativa){
            printf("\n*************** QUE PENA! TENTE NOVAMENTE ****************\n\n");
            printf("A palavra era: >>>>> %s <<<<<<\n\n",palavra);
        }
        else if (chute != '*'){
            printf("*********************  PARABENS! ****************************\n\n");
            printf("Voce acertou: >>>>>>>>>>>> %s <<<<<<<<<<<\n\n",palavra);
        }
        else if(chute == '*'){
            printf("\n\n***************** VOCE SAIO DO JOGO ********************\n\n");
        }

return 0;
}
