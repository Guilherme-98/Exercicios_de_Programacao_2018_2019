#include<stdio.h>
#include<string.h>
int main (){
    char frase[50];
    char palavra[] = "teclado";
    int i, j, x, contador=0,aux,aux2;
    printf("Informe a frase:");
    gets(frase);
    x = strlen(palavra);

    for(i=0;i<strlen(frase);i++){
        aux = i;
        for(j=0;j<strlen(palavra);j++){
            if(frase[i] == palavra[j]){
                contador++;
                i++;
            }
            if(x == contador){
                aux2 = i-1;
                //printf("%d\n\n",aux2);
            }
        }
        i = aux;
        contador = 0;
        printf("%c",frase[i]);
        if(i == aux2){
            printf(" OU MOUSE");
        }

    }
return 0;
}
