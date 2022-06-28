#include<stdio.h>
int main (){
    int matriz[5][10], i, j, contador=0, freq[5], num;
        for(i=0; i<5; i++){
            for(j=0; j<10; j++){
                printf("Digite o valor da linha %d e coluna %d: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Informe o dado que deseja procurar na matriz: ");
        scanf("%d",&num);

        for(i=0; i<5; i++){
            contador = 0;
            for(j=0; j<10; j++){
                if(num == matriz[i][j]){
                    contador++;
                }
                freq[i] = contador;
            }
        }

        printf("\nO numero %d desejado.\n",num);
        for(i=0; i<5; i++){
            printf("Linha %d aparece %d\n", i+1, freq[i]);
        }
return 0;
}
