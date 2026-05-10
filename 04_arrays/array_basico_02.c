#include <stdio.h>

int main(void)
{
    int numeros [2];
    int i;


    printf("Ingresar 2 números: \n");
    
    for(i = 0; i < 2; i++)
    {
        printf("Número [%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("Números ingresados: \n");

    for(i = 0; i < 2; i++)
    {
        printf("Elementos [%d] = %d\n", i, numeros[i]);

    }

    return 0;
}

