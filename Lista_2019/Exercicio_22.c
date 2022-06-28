#include<stdio.h>
int main (){
    char nome[50];
    float salario, novoS;
    int codigo;
    printf("Informe o nome:");
    scanf("%s",&nome);
    printf("Informe o salario:");
    scanf("%f",&salario);
    printf("Forneca o cargo conforme a tabela:\n");
    printf("1 - Gerente\n2 - Emgenheiro\n3 - tecnico\nInforme qualquer outro numero se nao for nenhuma dessas opcoes.\n");
    scanf("%d",&codigo);
        if(codigo == 1){
            novoS = ((salario / 100) * 10) + salario;
        }
        else if(codigo == 2){
            novoS = ((salario / 100) * 20) + salario;
        }
        else if(codigo == 3){
            novoS = ((salario / 100 ) * 30) + salario;
        }
        else{
            novoS = ((salario / 100) * 40) + salario;
        }
        printf("\n%s\nSalario antigo:%.3f\nNovo salario:%.3f\n",nome,salario,novoS);
return 0;
}
