#include <stdio.h>

int main (void)
{
    int numero; 
    int suma = 0;
    
     printf("Ingrese un N°: "); // Solicita ingresar un número
     scanf("%d", &numero); // Almacena número en número

/*------------------------------------------*/

   while (numero != 0) // Verifica que número no sea cero
    {
        suma += numero; // suma = suma + número

        printf("Ingrese un N°: "); // Solicita ingresar un número
        scanf("%d", &numero); // Almacena el número
    }
    
    printf("ingresaste cero.\n"); // Si ingresa número imprime mensaje
    printf("suma: %d\n", suma); // imprime la suma de los números

return 0;
}
