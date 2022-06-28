#include<stdio.h>
#include<string.h>
int main (){
    char frase[50],aux4[20];
    int i,j,aux[50],tamanho,contador,x=0,maior=0,aux3[20],k=0;
    printf("Forneca a string:");
    gets(frase);
    tamanho = strlen(frase);
    //Verificando a maior quantidade de apareções de uma letra.
    for(i=0;i<tamanho;i++){
            contador=0;
        for(j=0;j<tamanho;j++){
            if(frase[i] == frase[j]){
                contador++;
            }
        }
                aux[x] = contador;
                x++;
    }
    //Atribuindo a maior aparição a varialvel maior.
        for(i=0;i<x;i++){
            if(aux[i]>maior){
                maior = aux[i];
            }
        }

        x=0;

    //Colentando as letras que possuem a mesma quuantidade de apareções da variavel maior.
        for(i=0;i<tamanho;i++){
                contador=0;
            for(j=0;j<tamanho;j++){
                if(frase[i] == frase[j]){
                        contador++;
                }
            }
            if (contador == maior){
                aux3[x]=i;
                x++;
            }
        }
        //Verificando se existe elemento repedido dentro do vetor.
        for(i=0;i<x;i++){
                contador=0;
            for(j=i;j>=0;j--){
                if(frase[aux3[i]] == frase[aux3[j]]){
                    contador++;
                }
            }
            if(contador == 1){
                aux4[k]=frase[aux3[i]];
                k++;
            }
        }
        //Printando os elementos.
        printf("O caracter que mais apareceu:");
        for(i=0;i<k;i++){
            printf("%c ",aux4[i]);
        }
        printf("\n\n");
return 0;
}
