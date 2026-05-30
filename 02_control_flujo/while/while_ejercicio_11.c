#include <stdio.h>

int main (void)
{
    int numero;
    int positivo= 0; // Contador de positivos
    int negativo = 0; // Contador de negativos
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

        if (numero < 0) // Verifica si el número es menor que cero
        {
            negativo += 1; // Si el número es negativo suma

        }
        else
        {
            positivo += 1; // Si el número es positivo suma
        }

     printf("Ingrese un N°: "); // Solicita nuevo número
     scanf("%d", &numero);
    }
    
    promedio = (float) suma / cantidad; //Calcula el promedio 

    printf("Ingresaste cero\n"); // Termina programa si se ingresa cero 
    
    printf("Números positivos: %d\n", positivo); // Imprime números pares
    printf("Números negativos: %d\n",negativo); // Imprime números impares
    printf("Suma: %d\n", suma); // Imprime la suma de los números
    printf("Cantidad: %d\n", cantidad); // Imprime la cantidad de números ingresados
    printf("Promedio: %.2f\n", promedio); // Imprime el promedio de los números ingresados


return 0;
}
