#include <stdio.h>

int main(){
    int A[5][4];
    int B[4][3];
    carregar_matrizA(A);
    carregar_matrizB(B);

    int C[5][3];
    double temp;
    int k1, k2, i;

     for(k1=0;k1<5;k1++)
    {
        for(k2=0;k2<3;k2++)
        {
            temp=0;
            for(i=0;i<4;i++)
            {
                temp=temp+A[k1][i]*B[i][k2];
            }
            C[k1][k2]=temp;
        }
    }

     for(k1=0;k1<5;k1++){
        printf("[");
        for (k2=0;k2<3;k2++){
            printf("%d ",C[k1][k2]);
        }
        printf("]\n");
    }
    return 0;
}

void carregar_matrizA(int A[5][4]){
    int i,j;
     for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
}

void carregar_matrizB(int B[4][3]){
    int i,j;
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("B[%d][%d] = ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
}
