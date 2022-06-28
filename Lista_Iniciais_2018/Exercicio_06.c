#include<stdio.h>
int main (){
    char op;
    printf("Forneca uma letra:");
    scanf("%c",&op);
    if ((op == 'a')|| (op == 'e') || (op == 'i') || (op == 'o') || (op == 'u') || (op == 'A')|| (op == 'E') || (op == 'I') || (op == 'O') || (op == 'U')){
        printf("A letra %c e Vogal.\n",op);
    }
    else {
        printf("A letra %c e Consoante.\n",op);
    }
return 0;
}
