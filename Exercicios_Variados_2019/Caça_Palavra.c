
#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAM_MAX 10

void printCruz(char **cruzadinha) {

    for(int i=0; i<TAM_MAX; i++) {
        for(int j=0; j<TAM_MAX; j++) {
            int numRandom = 65 + (rand() % 26);
            if(cruzadinha[i][j] != 0)
                printf("%c ", cruzadinha[i][j]);
            else
                printf("%c ", numRandom);
        }
        printf("\n");
    }
}

int escolherPosicaoAleatoria(char nome[TAM_MAX]) {
    int pos;
    do {
        pos = rand() % TAM_MAX;
    }while(pos+strlen(nome) >= TAM_MAX);

    return pos;
}

int main(void)
{

    char **cruzadinha = calloc(TAM_MAX, sizeof(char*));
    for(int i=0; i<TAM_MAX; i++) {
        cruzadinha[i] = calloc(TAM_MAX, sizeof(char*));
    }

    int num;
    char nome[TAM_MAX];
    FILE *f = fopen("arq.txt", "r");

    while(1) {
        fscanf(f, "%s %d", nome, &num);
        if(feof(f))
            break;

        srand(time(NULL));
        int frenteParaTras = rand() % 2; // Se for 1 é normal, se não é de tras para frente
        int tudoCerto;

        if(num == 0 || num == 2 || num == 4 || num == 6) { // Diagonal

            do {
                tudoCerto = 1;
                int posLinha = escolherPosicaoAleatoria(nome);
                int posColuna = escolherPosicaoAleatoria(nome);

                if(frenteParaTras) {
                    for(int i=0; i<strlen(nome); i++) {
                        if(cruzadinha[posLinha][posColuna] == 0 || cruzadinha[posLinha][posColuna] == nome[i]) {
                            cruzadinha[posLinha][posColuna] = nome[i];
                            posLinha++; posColuna++;
                        } else {
                            tudoCerto = 0;
                        }
                    }
                } else {
                    for(int i=0; i<strlen(nome); i++) {
                        if(cruzadinha[posLinha][posColuna] == 0 || cruzadinha[posLinha][posColuna] == nome[strlen(nome)-i-1]) {
                            cruzadinha[posLinha][posColuna] = nome[strlen(nome)-i-1];
                            posLinha++; posColuna++;
                        } else {
                            tudoCerto = 0;
                        }
                    }
                }
            }while(!tudoCerto);


        } else if(num == 1 || num == 5) { // Vertical

            do {
                tudoCerto = 1;
                int posLinha = escolherPosicaoAleatoria(nome);
                int posColuna = rand() % TAM_MAX;

                if(frenteParaTras) {
                   for(int i=0; i<strlen(nome); i++) {
                        if(cruzadinha[posLinha][posColuna] == 0 || cruzadinha[posLinha][posColuna] == nome[i]) {
                            cruzadinha[posLinha][posColuna] = nome[i];
                            posLinha++;
                        } else {
                            tudoCerto = 0;
                        }
                   }
                } else {
                    for(int i=0; i<strlen(nome); i++) {
                        if(cruzadinha[posLinha][posColuna] == 0 || cruzadinha[posLinha][posColuna] == nome[strlen(nome)-i-1]) {
                            cruzadinha[posLinha][posColuna] = nome[strlen(nome)-i-1];
                            posLinha++;
                        } else {
                            tudoCerto = 0;
                        }
                   }
                }
            }while(!tudoCerto);


        } else if(num == 3 || num == 7) { // Horizontal

            do {
                tudoCerto = 1;
                int posLinha = rand() % TAM_MAX;
                int posColuna = escolherPosicaoAleatoria(nome);

                if(frenteParaTras) {
                   for(int i=0; i<strlen(nome); i++) {
                        if(cruzadinha[posLinha][posColuna] == 0 || cruzadinha[posLinha][posColuna] == nome[i]) {
                            cruzadinha[posLinha][posColuna] = nome[i];
                            posColuna++;
                        } else {
                            tudoCerto = 0;
                        }
                   }
                } else {
                    for(int i=0; i<strlen(nome); i++) {
                        if(cruzadinha[posLinha][posColuna] == 0 || cruzadinha[posLinha][posColuna] == nome[strlen(nome)-i-1]) {
                            cruzadinha[posLinha][posColuna] = nome[strlen(nome)-i-1];
                            posColuna++;
                        } else {
                            tudoCerto = 0;
                        }
                   }
                }
           }while(!tudoCerto);

        } else {
            printf("ERRO: Numero %d inválido", num);
        }
    }

    printCruz(cruzadinha);
}
