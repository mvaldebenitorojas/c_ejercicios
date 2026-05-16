#include <stdio.h>

int main(void)
{
    int filas= 0; 
    int columnas= 0;

    printf("Ingrese N° de filas: "); // Solicita número
 
/*----------------------------------------------------------*/
// Validacion de número de filas
    
    while (scanf("%d",&filas) != 1 || filas <= 0)   
   {
        printf("Error: sólo números y mayor a cero\n");

        while (getchar() != '\n');

        printf("Ingrese N° de filas: ");
   }

     printf("Ingrese N° de columnas: "); // Solicita número
    
/*----------------------------------------------------------*/
// Validacion de número de columnas 

    while (scanf("%d",&columnas) != 1 || columnas <= 0)   
   {
        printf("Error: sólo números y mayor a cero\n");

        while (getchar() != '\n');

        printf("Ingrese N° de columnas: ");
   }

/*----------------------------------------------------------*/   
// imprime *

    int i,j;

    for (i = 1; i <= filas; i++)
    {
        for (j = 1; j<= columnas; j++)
        {
            printf(" *");
        }
    printf("\n");
    }

return 0;
}
