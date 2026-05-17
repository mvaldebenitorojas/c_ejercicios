#include <stdio.h>

int main (void)
{
    int numero; 
    int suma = 0;

    printf("Ingrese un N°: "); // Solicita número
    scanf("%d",&numero); 

/*----------------------------------------------------------*/
// Ingreso de números

   while (numero != 0)
   {
    suma += numero; 

    printf("Ingrese un N°: ");
    scanf("%d",&numero); 

   }
/*----------------------------------------------------------*/
// Imprime la suma

    printf("Suma: %d\n", suma);

return 0;
}
