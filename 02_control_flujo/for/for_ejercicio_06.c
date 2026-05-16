#include <stdio.h>

int main(void)
{
    int n, numero; 
    int pares = 0; 
    int impares = 0;

    printf("Ingrese un N°: "); // Solicita número
 
/*----------------------------------------------------------*/
// Validacion de número positivo 

    while (scanf("%d",&numero) != 1 || numero <= 0)   
   {
        printf("Error: sólo números y mayor a cero\n");

        while (getchar() != '\n');

        printf("Ingrese un N°: ");
   }

/*----------------------------------------------------------*/
// Inicia contador y verifica par o impar

    for (n = 1; n <= numero; n++)
    {

        if(n % 2 == 0)
        {
            pares ++;
        }

        else
        {
            impares ++;
        }
    }

/*----------------------------------------------------------*/
// Imprime los resultados por pantalla

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

return 0;
} 
