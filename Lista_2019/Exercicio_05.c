#include<stdio.h>
int main (){
    float C, H, E, total;
    float N;
    printf("Informe o numero de horas trabalhadas:");
    scanf("%f",&N);
        if (N > 50){
            C = (50 * 10);  //Salario ate 50 horas.
            H = (N - 50);   //Horas mais que 50 horas.
            E = (H * 20);   // Salario com horas amais de 50.
            total = C + E;
            printf("O salario total e:%.2f reais\n", total);
            printf("O salrio sem horas extras e:%.2f reais\n",C);
            printf("O salario excedente e:%.2f reais\n",E);
        }
        else {
            C = (N * 10.00);
            printf("O salario total e:%.2f reais\n",C);
        }
return 0;
}
