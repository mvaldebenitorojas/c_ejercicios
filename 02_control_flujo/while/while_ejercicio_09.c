#include <stdio.h>

int main (void)
{
    int numero;
    int i = 1;
    int multi;

     printf("Ingrese un N°: "); // Solicita ingresar un número
     scanf("%d", &numero); // Almacena en número

/*-----------------------------------------------------------------------*/
   while (numero != 0) // Mientras número ingresado no sea cero
    {
    
        while(i <= 12) // Inicia contador para la multiplicación
        {
            multi = numero * i; // Realiza la multiplicación 

            printf("%d x %d = %d\n", numero, i, multi); // Imprime la multiplicación
            
            i += 1; // Suma uno al contador y repite multiplicación hasta llegar a 12
        }

     i = 1; // Reinicia el contador

     printf("Ingrese un N°: "); // Solicita nuevo número
     scanf("%d", &numero);
    }

    printf("Ingresaste cero\n"); // Termina programa si se ingresa cero 

return 0;
}
