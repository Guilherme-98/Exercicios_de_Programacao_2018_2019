#include<stdio.h>
#include<string.h>
int main (){
    char str[30];
    int i=0;
    printf("Forneca uma string:");
    fgets(str,30,stdin);
    while(str[i] != '\n'){ //'\n' pq eu peguei a string como fgets, pois ela pula uma linha automatica//
            printf("%c",str[i]-32);
            i++;
    }
return 0;
}
