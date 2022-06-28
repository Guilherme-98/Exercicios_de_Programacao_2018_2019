#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Cliente{
    char nome[25];
    char endereco[25];
    char cadastro[25];
};

void adcionar(){
    struct Cliente a;
    FILE *arq;

    arq = fopen("cliente.bin","a+b");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }

    fflush(stdin);
    printf("Informe o nome do cliente:");
    fgets(a.nome,25,stdin);
    fflush(stdin);

    printf("Informe o endereco do cliente:");
    fgets(a.endereco,25,stdin);
    fflush(stdin);

    printf("Informe a data de cadastro do cliente:");
    fgets(a.cadastro,25,stdin);

    fwrite(&a,sizeof(struct Cliente),1,arq);

fclose(arq);
}
void alterar(){
    char nome[25];
    struct Cliente a;
    fflush(stdin);
    printf("Forneca o nome do cliente que pretente fazer as alteracoes:");
    fgets(nome,25,stdin);

    FILE *arq;
    arq = fopen("Cliente.bin","rb");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n");
            system("pause");
            exit(1);
        }

    FILE *arq2;
    arq2 = fopen("Cliente2.bin","wb");
        if(arq2 == NULL){
            printf("Erro na abertura do arquivo2.\n");
            system("pause");
            exit(1);
        }
        while(fread(&a,sizeof(struct Cliente),1,arq)==1){
            if(strcmp(a.nome,nome)==0){
                    fflush(stdin);
                    printf("Informe o nome do cliente:");
                    fgets(a.nome,25,stdin);
                    fflush(stdin);

                    printf("Informe o endereco do cliente:");
                    fgets(a.endereco,25,stdin);
                    fflush(stdin);

                    printf("Informe a data de cadastro do cliente:");
                    fgets(a.cadastro,25,stdin);
            }
            fwrite(&a,sizeof(struct Cliente),1,arq2);
        }
fclose(arq);
fclose(arq2);
remove("Cliente.bin");
rename("Cliente2.bin","Cliente.bin");
}
void imprimir(){
    struct Cliente a;
    FILE *arq;
    arq = fopen("Cliente.bin","rb");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n");
            system("pause");
            exit(1);
        }

    while(fread(&a,sizeof(struct Cliente),1,arq)==1){
            printf("Cliente:%s",a.nome);
            printf("Endereco:%s",a.endereco);
            printf("Cadastro:%s\n",a.cadastro);
    }
fclose(arq);
}
void excluir(){
    char nome[25];
    struct Cliente a;


    FILE *arq;
    arq = fopen("Cliente.bin","rb");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n");
            system("pause");
            exit(1);
        }

    FILE *arq2;
    arq2 = fopen("Cliente2.bin","wb");
        if(arq2 == NULL){
            printf("Erro na abertura do arquivo2.\n");
            system("pause");
            exit(1);
        }
    fflush(stdin);
    printf("Informe o nome do cliente que deseja excluir:");
    fgets(nome,25,stdin);

    while(fread(&a ,sizeof(struct Cliente),1,arq)==1){
            if(strcmp(nome,a.nome)==0){
                printf("Cliente excluir do com sucesso.\n\n");
            }
            else{
                fwrite(&a,sizeof(struct Cliente),1,arq2);
            }

    }
fclose(arq);
fclose(arq2);
remove("Cliente.bin");
rename("Cliente2.bin","Cliente.bin");

}
int main (){
    int op;
    while(op){
        printf("****************\n");
        printf("* 0- Sair      *\n");
        printf("* 1- Adcionar  *\n");
        printf("* 2- Alterar   *\n");
        printf("* 3- Imprimir  *\n");
        printf("* 4- Excluir   *\n");
        printf("****************\n");
        printf("Escolher:");
        scanf("%d",&op);
        printf("\n");

            switch(op){

                case 0:
                    return 0;

                case 1:
                    adcionar();
                        break;

                case 2:
                    alterar();
                        break;

                case 3:
                    imprimir();
                        break;

                case 4:
                    excluir();
                        break;

                default:
                    printf("Opcao invalida.\n");
                    break;
            }
    }
return 0;
}
