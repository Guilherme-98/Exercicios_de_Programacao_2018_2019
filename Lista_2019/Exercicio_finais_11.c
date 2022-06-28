#include <stdio.h>
int main(){
  int n;
  int fator;   /* candidato a fator do numero dado */
  int mult;    /* multiplicidade de fator */
  printf("Entre com o numero a ser decomposto: ");
  scanf("%d",&n);
  printf("Decomposicao de %d em fatores primos:\n\n",n);

  fator = 2;
  while (n > 1){
      mult = 0;
      while (n % fator == 0){
          mult ++;
          n = n / fator;
        }
            if (mult != 0){
            printf("Fator %d multiplicidade %d\n\n", fator, mult);
            }
      fator++;
    }
return 0;
}
