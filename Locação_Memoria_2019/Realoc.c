#include<stdio.h>
#include<stdlib.h>
int main (){
    int i, *p;
p = calloc(5, sizeof(int));
for(i = 0; i < 5; i++)
p[i] = i+1;
for(i = 0; i < 5; i++)
printf("%d ", p[i]);
printf("\n");
p = realloc(p, 3*sizeof(int)); //Diminui o tamanho do array
for(i = 0; i< 3; i++)
printf("%d ", p[i]);
printf("\n");
p= realloc(p, 10 * sizeof(int)); //Aumenta o tamanho do array
for(i = 0; i < 10; i++)
printf("%d ", p[i]);

return 0;
}
