#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("clear");

    int n; // declaro n como entero
    

    printf("Ingrese cuantos números: \n"); // Solicita la cantidad de numeros a ingresar y los guarda
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("Error: Tamaño inválido\n");
        return 1;
    }

    int numeros [n]; // se configura la cantidad de números dentro de la matriz
    int i;


    printf("Ingresar números: \n"); // inicia ingreso de números
    
    for(i = 0; i < n; i++)
    {
        printf("Número [%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros ingresados: \n");

    for(i = 0; i < n; i++)
    {
        printf("Elementos [%d] = %d\n", i, numeros[i]);

    }

    return 0;
}

