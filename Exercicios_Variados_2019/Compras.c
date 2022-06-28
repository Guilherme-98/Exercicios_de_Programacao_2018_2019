#include<stdio.h>
enum{Inserir = 1,Encerar};
struct Prod {
    char produto[30];
    float preco;
    int quantidade;
};
int main (){
    int i = 0, j,op;
    float total = 0,preco[10];
    struct Prod a[10];

    while(op){

            printf("********************\n");
            printf("*1- Inserir produto*\n");
            printf("*2- Encerar        *\n");
            printf("********************\n");
            printf("Escolha:");
            scanf("%d",&op);

        switch(op){

            case 1:

                printf("Informe o nome do produto:");
                fflush(stdin);
                fgets(a[i].produto,30,stdin);
                printf("Informe o preco do produto:");
                scanf("%f",&a[i].preco);
                printf("Informe a quantidade do produto:");
                scanf("%d",&a[i].quantidade);

                preco[i] = a[i].preco * a[i].quantidade;
                total = total + preco[i];
                i++;
                    break;

            case 2:

                for(j=0;j<i;j++){
                    printf("Produto:%s",a[j].produto);
                    printf("Preco desse produto com as quantidades:%.2f",preco[j]);
                    printf("\n\n");
                }
                printf("O preco total da compra:%.2f\n",total);
                    return 0;

            default:

                printf("Forneca uma das opcoes correspontentes.\n");
                    break;
        }

    }


return 0;
}
