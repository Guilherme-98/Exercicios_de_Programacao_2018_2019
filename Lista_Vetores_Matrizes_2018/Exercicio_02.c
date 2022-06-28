#include<stdio.h>
int main (){
    char str;
        printf("Forneca um letra: ");
        scanf("%c",&str);
            if(str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U' || str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u'){
                printf("\nA letra %c: Vogal\n",str);
            }
            else{
                printf("\nA letra %c: Consoante\n",str);
            }
return 0;
}
