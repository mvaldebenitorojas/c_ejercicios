#include <stdio.h>

int main (void)
{
    int numero;
    int mayor = 0;

     printf("Ingrese un N°: "); // Solicita ingresar un número
     scanf("%d", &numero); // Almacena en número

/*-----------------------------------------------------------------------*/

   while (numero != 0) // Mientras número ingresado no sea cero
    {
      if(numero > mayor) // Verifica si el número ingresado es mayor que mayor
      {
       mayor = numero; // Almacena el valor en mayor
      }
        printf("Ingrese un N°: "); // solicita nuevo número
        scanf("%d", &numero);
    }
    printf("ingresaste cero.\n"); // Si es cero imprime mensaje
    printf("N° mayor es: %d\n", mayor); // Imprime el número mayor

return 0;
}
