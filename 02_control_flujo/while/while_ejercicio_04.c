#include <stdio.h>

int main (void)
{
    int numero; 
    int contador = 0;

/*-----------------------------------------------------*/    

     printf("Ingrese un N°: "); // Solicita ingresar un número
     scanf("%d", &numero);  // almacena número en número

   while (numero != 0) // Verifica que número sea dstinto a cero
    {
        contador += 1; // suma 1 al contador

        printf("Ingrese un N°: "); // Solicita ingresar un número y repite
        scanf("%d", &numero);
    }
        
    printf("ingresaste cero.\n"); // Si se ingresa cero imprime mensaje
    printf("%d números ingresados\n",contador); // imprime el contador
    
return 0;
}
