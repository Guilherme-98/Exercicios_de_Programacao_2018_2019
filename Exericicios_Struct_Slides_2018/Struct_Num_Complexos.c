#include<stdio.h>
#include<math.h>
    struct Numero{
        int real;
        int imaginario;
        int real2;
        int imaginario2;
        int soma_real;
        int soma_imaginario;
        int subtracao_real;
        int subtracao_imaginario;
        int produto_real;
        int produto_imaginario;
        int modulo;
        int modulo2;
    };
int main (){
    struct Numero complexo;

    printf("Informe a parte real do primeiro numero complexo:");
    scanf("%d",&complexo.real);
    printf("Informe a parte imaginaria do primeiro numero complexo:");
    scanf("%d",&complexo.imaginario);


    printf("Informe a parte real do segundo numero complexo:");
    scanf("%d",&complexo.real2);
    printf("Informe a parte imaginaria do segundo numero complexo:");
    scanf("%d",&complexo.imaginario2);

    complexo.soma_real = complexo.real + complexo.real2;
    complexo.soma_imaginario = complexo.imaginario + complexo.imaginario2;


    complexo.subtracao_real = complexo.real - (complexo.real2);
    complexo.subtracao_imaginario = complexo.imaginario - (complexo.imaginario2);


    complexo.produto_real = complexo.real * complexo.real2;
    complexo.produto_imaginario = complexo.imaginario * complexo.imaginario2;

    complexo.modulo = (complexo.real * complexo.real) + (complexo.imaginario * complexo.imaginario);
    complexo.modulo = sqrt(complexo.modulo);

    complexo.modulo2 = (complexo.real2 * complexo.real2) + (complexo.imaginario2 * complexo.imaginario2);
    complexo.modulo2 = sqrt(complexo.modulo2);

    printf("Soma:%d %di\n",complexo.soma_real,complexo.soma_imaginario);

    printf("Subtracao:%d %di\n",complexo.subtracao_real,complexo.subtracao_imaginario);

    printf("produto:%d %di\n",complexo.produto_real,complexo.produto_imaginario);

    printf("Modulo do primeiro numero complexo:%d\n",complexo.modulo);

    printf("Modulo do segundo numero complexo:%d\n",complexo.modulo2);

return 0;
}
