#include<stdio.h>
void converteHora(int *total_segundos, int *h, int *m, int *s){
    int aux=3600;
        *h = *total_segundos / aux;
        *m = (*total_segundos - (aux * (*h)))/60;
        *s = (*total_segundos - (aux * (*h))-(*m*60));
}
int main (){
    int hora, minuto, segundo, num;
        printf("Informe a quantidade de segundos:");
        scanf("%d",&num);
        converteHora(&num, &hora, &minuto, &segundo);
        printf("\n\nHora(s):%d Minuto(s):%d Segundo(s):%d\n\n",hora,minuto,segundo);
return 0;
}
