#include <stdio.h>
int main()
{
   int numero;
    scanf("%d", &numero);
    printf("Antecessores: %d e %d\nSucessores: %d e %d\n", numero-2,numero-1, numero+1, numero+2);
    return 0;
}
