#include <stdio.h>

int main(){
    int matriz_a[5][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
    int matriz_b[5][3] = {15, 25, 35, 45, 55, 65, 75, 85, 95, 105, 115, 125, 135, 145, 155};
    int matriz_c[2][15];
    juntar_matrizes(matriz_a,matriz_b,matriz_c);
    imprimir_matriz(matriz_c);
    return 0;
}

void juntar_matrizes(int A[5][3], int B[5][3], int C[2][15]){
    int i,j, count=0;
    for(i = 0; i < 5; i++)
    {
        for(j=0;j<3; j++){
            C[0][i*3+j]=A[i][j];
            C[1][i*3+j]=B[i][j];
        }        
    }
   
}

void imprimir_matriz(int matriz[2][15]){
    int i,j;
    for(i=0;i<2;i++){
        printf("[");
        for (j=0;j<15;j++){
            printf("%d ",matriz[i][j]);        
        }
        printf("]\n");
    }
}