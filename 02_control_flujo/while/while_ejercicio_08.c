#include <stdio.h>

int main (void)
{
    int numero;
    int suma = 0;
    float promedio;
    int cantidad = 0;

     printf("Ingrese un N°: "); // Solicita ingresar un número
     scanf("%d", &numero); // Almacena en número

/*-----------------------------------------------------------------------*/
   while (numero != 0) // Mientras número ingresado no sea cero
    {
     suma += numero;

     cantidad += 1; // suma 1 al contador

     printf("Ingrese un N°: "); // solicita nuevo número
     scanf("%d", &numero);

    }
    promedio = (float) suma / cantidad; //Calcula el promedio 

    printf("ingresaste cero.\n\n"); // Si es cero imprime mensaje
    printf("Suma: %d\n", suma); // Imprime la suma de los números
    printf("Cantidad: %d\n", cantidad); // Imprime la cantidad de números ingresados
    printf("Promedio: %.2f\n", promedio); // Imprime el promedio de los números ingresados


return 0;
}
