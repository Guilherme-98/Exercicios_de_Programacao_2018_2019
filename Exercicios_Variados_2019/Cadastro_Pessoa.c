#include<stdio.h>
#include<string.h>
struct Pessoa{
    char nome[20];
    int idade;
};
int main (){
    int i = -1,j, contador = 0,op,x = 1;
    char aux[20];
    struct Pessoa a[20];

    while(op){
            printf("**************\n");
            printf("*1- Cadastro *\n");
            printf("*2- Encerar  *\n");
            printf("**************\n");
            printf("Escolha:");
            scanf("%d",&op);

        switch(op){

            case 1:
                i++;
                contador = 0;
                if(x == 1){
                    printf("Forneca o nome da pessoa:");
                    fflush(stdin);
                    fgets(a[i].nome,20,stdin);
                    fflush(stdin);
                    printf("Forneca a idade:");
                    scanf("%d",&a[i].idade);
                    x = 0;
                     break;
                }

                if(x == 0){
                    printf("Forneca o nome da pessoa:");
                    fflush(stdin);
                    fgets(aux,20,stdin);

                for(j=0;j<i;j++){
                    if(strcmp(a[j].nome,aux) == 0){
                        contador++;
                    }
                }
                        if(contador == 0){
                            strcpy(a[i].nome,aux);
                            printf("Forneca a idade:");
                            scanf("%d",&a[i].idade);
                        }
                        if(contador > 0){
                            printf("Essa pessoa ja e Cadastrada.\n");
                        }
                }
                    break;

            case 2:
                return 0;

            default:
                printf("Escolha um opcao correta.\n");
                    break;
        }
    }
return 0;
}
