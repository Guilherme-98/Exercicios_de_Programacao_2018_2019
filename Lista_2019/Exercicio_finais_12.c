#include <stdio.h>
int main(){
  int n;         /* no. de elementos na sequencia */
  int i;         /* contador de numeros lidos */
  int mdc;       /* maximo divisor comum dos numeros lidos */
  int numero;    /* guarda um numero da sequencia */
  int novo_mdc;  /* candidato a novo mdc */
  int divisor;   /* usado para encontrar  o novo mdc */


  printf("Forneca o tamanho da sequencia: ");
  scanf ("%d",&n);

  printf("Forneca o 1o. numero da sequencia: ");
  scanf ("%d",&mdc);
  i = 1;

  while (i < n){
      printf("Forneca o %do. numero da sequencia: ", i+1);
      scanf ("%d", &numero);
      i++;

      /* calcule o max divisor comum de mdc e numero */
      divisor = 1;

      while (divisor <= mdc && divisor <= numero){
          if (mdc % divisor == 0 && numero % divisor == 0){
              novo_mdc = divisor;
            }
          divisor++;
        }
      mdc = novo_mdc;
    }
  printf("MDC = %d\n",mdc);
return 0;
}

