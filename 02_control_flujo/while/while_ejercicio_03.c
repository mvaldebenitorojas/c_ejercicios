#include <stdio.h>

int main (void)
{
    int numero; 
    
     printf("Ingrese un N°: "); // Solicita ingresar un número
     scanf("%d", &numero); // Almacena en número

/*-----------------------------------------------------------------------*/

   while (numero != 0) // Mientras número ingresado no sea cero
    {
      if(numero % 2 == 0) // Verifica si el número ingresado es par
      {

        printf("%d\n", numero); // imprime el número en caso de ser par
      }
        printf("Ingrese un N°: "); // solicita nuevo número
        scanf("%d", &numero);
    }
    
    printf("ingresaste cero.\n"); // Si es cero imprime mensaje

return 0;
}
