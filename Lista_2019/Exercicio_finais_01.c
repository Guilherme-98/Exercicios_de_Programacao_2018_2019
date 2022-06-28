#include<stdio.h>
int main (){
    int i;
    printf("Os numeros impares de 100 a 200:\n");
    for(i=100; i<200; i++){
        if(i%2 != 0){
            printf("%d\n",i);
        }
    }
return 0;
}
