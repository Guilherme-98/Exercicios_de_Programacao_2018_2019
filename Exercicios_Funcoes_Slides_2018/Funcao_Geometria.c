#include<stdio.h>
int area(int a, int b){
    int aux, aux2=0, resultado,corte,i,resultado2;

    for(i=1;i<a;i++){
        resultado2 = (a-(2*i));
            if(resultado2 > 0){
                resultado = (a-(2*i)) * (b-(2*i)) * i;
                    if(resultado > aux2){
                        aux2 = resultado;
                        corte = i;
                    }
            }
    }
    return corte;
}

int main (){
    int La,Lb,corte,resultado;

    printf("Forneca o tamanho do primeiro lado do retangulo:");
    scanf("%d",&La);

    printf("Forneca o tamanho do segundo lado do retangulo:");
    scanf("%d",&Lb);

    corte = area(La,Lb);

    resultado = (La-(2*corte)) * (Lb-(2*corte)) * corte;

    printf("\nO maior valume e:%d\n",resultado);
    printf("E o corte para obter esse volume e:%d\n\n",corte);

return 0;
}
