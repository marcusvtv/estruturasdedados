#include <stdio.h>

int main(){
    int vetor_a[5] = {10, 20, 30, 40, 50};
    int vetor_b[5] = {15, 25, 35, 45, 55};
    int vetor_c[10];
    juntar_vetores(vetor_a,vetor_b,vetor_c);
    imprimir_vetor(vetor_c);
    return 0;
}

void juntar_vetores(int A[5], int B[5], int C[10]){
    int i;
    for(i = 0; i < 5; i++)
    {
        C[i]=A[i];
        C[i+5]=B[i];
    }
   
}

void imprimir_vetor(int vetor[10]){
    int i;
    for(i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }
}