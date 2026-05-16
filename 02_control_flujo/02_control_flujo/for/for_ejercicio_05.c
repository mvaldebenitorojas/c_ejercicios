#include <stdio.h>

int main(void)
{
    int i, numero;

    int factorial = 1;

    printf("Ingrese un N°: "); // Solicita número
 
/*----------------------------------------------------------*/
// Validacion de número positivo 

    while (scanf("%d",&numero) != 1 || numero < 0)   
   {
        printf("Error: sólo números permitidos\n");

        while (getchar() != '\n');

        printf("Ingrese un N°: ");
   }

/*---------------------------------------------------------*/
// Calcula factorial

   for(i = 1; i <= numero; i++)
    {
        factorial *= i; 
    }
   
/*---------------------------------------------------------*/
// Imprime resultado

   printf("%d! = %d \n", numero, factorial);

return 0;
}
