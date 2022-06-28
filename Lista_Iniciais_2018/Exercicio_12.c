#include<stdio.h>
int main (){
    int n1, n2, n3;
    printf("Informe o primeiro valor:");
    scanf("%d",&n1);
    printf("Informe o segundo valor:");
    scanf("%d",&n2);
    printf("Infrome o terceiro valor:");
    scanf("%d",&n3);

    if((n1 < n2) && (n1 < n3))
        if(n2 < n3){
            printf("%d %d %d\n",n1,n2,n3);
        }
        else {
            printf("%d %d %d\n",n1,n3,n2);
    }
    if((n2 < n3) && (n2 < n1))
        if(n1 < n3){
            printf("%d %d %d\n",n2,n1,n3);
        }
        else {
            printf("%d %d %d\n",n2,n3,n1);
    }
    if((n3 < n1) && (n3 < n2)){
        if(n2 < n1){
            printf("%d %d %d\n",n3,n2,n1);
        }
        else {
            printf("%d %d %d\n",n3,n1,n2);

        }
    }
return 0;
}
