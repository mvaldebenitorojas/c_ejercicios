#include <stdio.h>

int main (void)
{
    int numero;
    int mayor = 0;
    int menor = 0;

     printf("Ingrese un N°: "); // Solicita ingresar un número
     scanf("%d", &numero); // Almacena en número

     menor = numero; // Almacena número a la variable menor
     mayor = numero; // Almacena número a la variable mayor 
/*-----------------------------------------------------------------------*/

   while (numero != 0) // Mientras número ingresado no sea cero
    {
      if(numero > mayor) // Verifica si el número ingresado es mayor que mayor
      {
       mayor = numero; // Almacena el valor en mayor
      } 
      if(numero < menor)
      {
       menor = numero; // Almacena el valor en menor
      }
      
        printf("Ingrese un N°: "); // solicita nuevo número
        scanf("%d", &numero);
    }
    printf("ingresaste cero.\n"); // Si es cero imprime mensaje
    printf("N° mayor es: %d\n", mayor); // Imprime el número mayor
    printf("N° menor es: %d\n", menor); // Imprime el número menor



return 0;
}
