#include<stdio.h>
int main (){
    int num, i, a=1, b=1, r;
    printf("Infrome um numero positivo:");
    scanf("%d", &num);

    while( num <0){
        printf("Infrome um valor positivo:");
        scanf("%d", &num);
    }
        if(num == 0){
            printf("0\n");
        }

    for(i=0; i<num; i++){
      if(i == 0){
        printf("%d ",a);
      }
      else if( i == 1){
        printf("%d ",b);
      }
      else{
            r = a + b;
            a = b;
            b = r;
            printf("%d ",r);
      }
    }
return 0;
}
