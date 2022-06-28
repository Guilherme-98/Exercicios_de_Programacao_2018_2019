#include<stdio.h>
#include<string.h>
#include<stdio.h>
int main (){
    char palavra[50];
    int i, j, aux;

    printf("Forneca uma palavra:");
    gets(palavra);

    for(i=0;i<strlen(palavra);i++){
        for(j=i+1;j<strlen(palavra);j++){
                if(palavra[i]>palavra[j]){
                   aux = palavra[i];
                   palavra[i] = palavra[j];
                   palavra[j] = aux;
                }
        }
    }
    for(i=0;i<strlen(palavra);i++){
        printf("%c",palavra[i]);
    }
    printf("\n\n");
return 0;
}
