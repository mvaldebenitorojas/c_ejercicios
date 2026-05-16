#include <stdio.h>

int numero, i; // Variables

int main(void)
{

    printf("Ingrese un N°: "); // Solicita número
    scanf("%d",&numero); // Se almacena el valor %d en &numero

    for(i = 1; i <= 10; i++) // contador
    {
        printf("%d x %d = %d\n", numero, i, numero * i); // (numero, incremento, multiplicacion)

    }

return 0;
}
