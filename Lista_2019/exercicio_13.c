#include<stdio.h>
int main (){
    int n1, n2, n3;
    printf("Infrome o primeiro valor:");
    scanf("%d",&n1);
    printf("Infrome o segundo valor:");
    scanf("%d",&n2);
    printf("Infrome o terceiro valor:");
    scanf("%d",&n3);
    if((n1 < n2+n3) && (n2 < n1+n3) && (n2 < n1+n2)){
        printf("Esses numeros podem formar um triangulo.\n");

        if((n1 == n2) && (n2 == n3)){
            printf("E um triangulo equilatero.\n");
        }
        else if((n1 != n2) && (n2 != n3)){
            printf("E um triangulo escaleno.\n");
        }
        else{
            printf("E um triangulo isosceles.\n");
        }
    }
    else{
        printf("Esses numeros nao podem formar um triangulo.\n");
        }
return 0;
}
