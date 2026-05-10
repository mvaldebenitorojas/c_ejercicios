#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system ("clear"); // Limpia pantalla

    int n,i;
    int suma = 0;

    printf("Ingrese cuantos números: "); //Solicita cantida de números
    scanf("%d", &n);

    if(n <= 0) // Verifica que numero ingresado sea positivo
    {
        printf("Error: tamaño inválido\n");
        return 1;
    }

    //-----------------------------------------------------------------------
    
    int numeros[n]; // Se configura el tamaño de la  matriz

    printf("\nIngrese los números:\n"); // Se ingresan los números

    for(i = 0; i < n; i++) // Contador
    {
        printf("Número [%d]: ", i);
        scanf("%d", &numeros[i]);
    }
    
    for(i = 0; i < n; i++) // Contador para suma
    {
        suma += numeros[i];
    }

    printf("\nNúmeros ingresados:\n"); // Se ve la cantidad de elementos ingresados

    for(i = 0; i < n; i++)
    {
        printf("Elemento [%d] = %d\n", i, numeros[i]);
    }
    
    printf("\nSuma total = %d\n", suma); // Se imprime la suma de los números

return 0;
}
