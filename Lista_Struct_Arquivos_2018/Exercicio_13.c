#include<stdio.h>
#include<stdlib.h>
int main (){
    int i, j,P1,P2,P3,S1,S2,S3,P,S,determinante,m[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Informe o valor da linha %d e da coluna %d:",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    P1 = m[0][0]*m[1][1]*m[2][2];
    P2 = m[0][1]*m[1][2]*m[2][0];
    P3 = m[0][2]*m[1][0]*m[2][1];
    P = P1 + P2 +P3;

    S1 = m[0][1]*m[1][0]*m[2][2];
    S2 = m[0][0]*m[1][2]*m[2][1];
    S3 = m[0][2]*m[1][1]*m[2][0];
    S = (S1 + S2 + S3)*(-1);

    determinante = P + S;

    printf("\nO determinante da matriz:%d\n\n",determinante);
return 0;
}
