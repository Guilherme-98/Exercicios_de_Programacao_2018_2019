#include<stdio.h>
#include<math.h>


int equacao(int a, int b, int c){
    int delta,x1,x2;
    int vetoraux[2];

    delta = (b*b)-(4*a*c);
    x1 = (-b+sqrt(delta))/(2*a);
    x2 =(-b-sqrt(delta))/(2*a);

    vetoraux[0]=x1;
    vetoraux[1]=x2;

    printf("\nValores dentro da funcao:\nx1:%d\nx2:%d\n\n",x1,x2);

    return vetoraux;
}
int main (){
    int a, b,c;
    int *raizes;
    int vetoraux[2];

    printf("Infrome o A:");
    scanf("%d",&a);

    printf("Infrome o B:");
    scanf("%d",&b);

    printf("Infrome o C:");
    scanf("%d",&c);

    raizes = equacao(a,b,c);

    printf("Valores dentro da funcao main:");
    printf("\nx1:%d \nx2:%d\n\n",*raizes,*(raizes+1));
    return 0;
}
