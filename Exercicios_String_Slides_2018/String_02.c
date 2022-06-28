#include<stdio.h>
#include<string.h>
int main (){
    char str[30];
    int contador=0,i;
    printf("Forneca uma string:");
    fgets(str,30,stdin);
    for(i=0;i<30;i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            contador++;
        }
    }
    printf("A quantidade de vogais:%d",contador);
return 0;
}
