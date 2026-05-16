#include <stdio.h>

int numero, i; // Variables

int main(void)
{

   printf("Ingrese un N°: "); // Solicita número
 
   while (scanf("%d",&numero) != 1)   
   {
        printf("Error: sólo números permitidos\n");

        while (getchar() != '\n');

        printf("Ingrese un N°: ");
   }

    for(i = 1; i <= 10; i++) // contador
    {
        printf("%d x %d = %d\n", numero, i, numero * i); // (numero, incremento, multiplicacion)

    }

return 0;
}
