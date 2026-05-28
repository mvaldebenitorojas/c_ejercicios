#include <stdio.h>

int main (void)
{
    int numero;
    int par = 0;
    int impar = 0;
    
     printf("Ingrese un N°: "); // Solicita ingresar un número
     scanf("%d", &numero); // Almacena en número

/*-----------------------------------------------------------------------*/

   while (numero != 0) // Mientras número ingresado no sea cero
    {
      if(numero % 2 == 0) // Verifica si el número ingresado es par
      {

       par += 1; // contabiliza los números pares
      }
      else
      {
          impar += 1; // contabiliza los números impares

      }
        printf("Ingrese un N°: "); // solicita nuevo número
        scanf("%d", &numero);
    }
    printf("ingresaste cero.\n"); // Si es cero imprime mensaje
    printf("N° pares: %d\n", par);
    printf("N° impares: %d\n", impar);

return 0;
}
