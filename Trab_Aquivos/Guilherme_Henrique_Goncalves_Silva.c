#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Palavra{
    int linha;
    int coluna;
};
int main (){
    char *c, **matriz, *saida, *str, *random,*key;
    int *i,*k,*y,*linha, *coluna,*contador;

    FILE *arq;
    FILE *arq2;
    FILE *arq3;

    struct Palavra *vetor;

    y = malloc(sizeof(int));
    for(*y=0;*y<10;(*y)++){


        c = malloc(sizeof(char));
        random = malloc(10*sizeof(char));
        key = malloc(10*sizeof(char));
        str = malloc(100*sizeof(char));

        linha = malloc(sizeof(int));
        coluna = malloc(sizeof(int));
        i = malloc(sizeof(int));
        k = malloc(sizeof(int));


        contador = malloc(sizeof(int));
            *linha = 1;
            *coluna = 1;

            sprintf(random,"%d.txt",*y);
            sprintf(key,"k%d.txt",*y);

            arq = fopen(random,"r");
            if(arq == NULL){
                printf("Ocorreu um erro na abertura do arquivo random.\n");
                system("pause");
                exit(1);
            }else{
                printf("O arquivo Random abriu corretamente.\n");
            }

            arq2 = fopen(key,"r");
            if(arq2 == NULL){
                printf("Ocorreu um erro na abertura do arquivo key.\n");
                system("pause");
                exit(1);
            }else{
                printf("O arquivo Key abriu corretamente.\n");
            }

            arq3 = fopen("out.txt","a");
            if(arq3 == NULL){
                printf("Ocorreu um erro na abertura do arquivo out.\n");
                system("pause");
                exit(1);
            }else{
                printf("O arquivo out abriu corretamente.\n");
            }

            printf("Arquivo 1.\n");
            *c = fgetc(arq);
            while(*c != EOF){
                if(*c == '\n'){
                    (*linha)++;
                }
                if(*linha == 1){
                    (*coluna)++;
                }
                *c = fgetc(arq);
            }

            matriz = (char **)malloc((*linha)*sizeof(char*)); //ALOCANDO A MATRIZ
            for(*i=0;*i<(*linha);(*i)++){
                matriz[*i] = (char *)malloc((*coluna)*sizeof(char));
            }

            rewind(arq);
           *c = fgetc(arq);
            for(*i=0;*i<(*linha);(*i)++){
                for(*k=0;*k<(*coluna);(*k)++){
                    matriz[*i][*k] = *c;
                    *c = fgetc(arq);
                }
            }
            printf("\nARQUIVO 2.\n");
            *contador = 0;
            *c = fgetc(arq2);
            while(*c != EOF){
                    if(*c == '\n'){
                        (*contador)++;
                    }
                    *c = fgetc(arq2);
                }

            vetor = malloc((*contador)*sizeof(struct Palavra));//ALOCANDO VETOR DE STRUCT
            str = malloc((*contador)*sizeof(char));

            (*i)=0;
            rewind(arq2);
            while(1){
                fgets(str,100,arq2);
                if(feof(arq2))
                    break;
                if(strcmp(str,"\n")==0){
                    (vetor+(*i))->linha = -1;
                    (vetor+(*i))->coluna = -1;

                }

                else{
                   (vetor+(*i))->linha = atoi(strtok(str,"-"));
                   (vetor+(*i))->coluna = atoi(strtok (NULL ,"-"));

                }

                (*i)++;
            }

            saida = malloc((*contador)*sizeof(char));//ALOCANDO VETOR DE SAIDA
            *i = 0;


            while(*i != *contador){
                if((vetor+(*i))->linha == -1){
                    saida[*i] = ' ';
                }else{
                saida[*i] = matriz[(vetor+(*i))->linha][(vetor+(*i))->coluna];

                }
                (*i)++;
            }
            for(*i=0;*i<(*contador);(*i)++){
               fprintf(arq3,"%c",saida[*i]);
            }
            fprintf(arq3,"%c",'\n');


            fclose(arq);
            fclose(arq2);
            fclose(arq3);

        for(*i=0;*i<*linha;(*i)++){
            free(matriz[*i]);
        }

        free(matriz);
        free(i);
        free(k);
        free(linha);
        free(coluna);
        free(contador);
        free(c);
        free(random);
        free(key);
        free(saida);
        free(str);
        free(vetor);

    }
        free(y);
return 0;
}
