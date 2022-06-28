#include<stdio.h>
int main (){
    float temperatura[10], temperaturaM=0;
    int i;
        for(i=0; i<10; i++){
            printf("Forneca a temperatura do dia %d:",i+1);
            scanf("%f",&temperatura[i]);
            temperaturaM = (temperaturaM  + temperatura[i]);
        }
            temperaturaM = temperaturaM / 10;
            printf("\n\nA temperatura media:%.2f\n\n",temperaturaM);
                for(i=0; i<10; i++){
                    if(temperatura[i] < temperaturaM)
                        printf("A temperatura do dia %d esta abaixo da media. A temperatura e de:%.2f\n", i+1, temperatura[i]);
                    else{

                    }
                }
return 0;
}
