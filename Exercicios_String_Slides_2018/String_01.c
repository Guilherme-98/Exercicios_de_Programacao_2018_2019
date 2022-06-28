#include<stdio.h>
#include<string.h>
int main (){
    char str[30];
    int total;
    printf("Forneca uma string:");
    gets(str);
    //fgets(str,30,stdin); Com fgets ele conta +1 caracter, pois, ele pula uma linha automaticamente '\n':
    total = strlen(str);
    printf("%d\n",total);
return 0;
}
