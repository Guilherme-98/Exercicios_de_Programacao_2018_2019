#include<stdio.h>
#include<string.h>
int main (){
    char str[100];
    int i, total;

    printf("Digite uma string:");
    gets(str);
    total = strlen(str);

    printf("%c",str[0]-32);

    for(i=1;i<total;i++){
        if(str[i] == ' '){
            printf("%c",str[i]);
            printf("%c",str[i+1]-32);
            i++;
        }
        else{
            printf("%c",str[i]);
        }
    }
return 0;
}
