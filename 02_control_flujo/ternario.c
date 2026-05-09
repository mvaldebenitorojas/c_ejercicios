#include <stdio.h>

int main(void)
{
   
    int edad;

    printf("Ingrese edad:\n");
   
/*-----------------------------------------------------------------*/
/*(condicion) ? (valor si es verdadero) : (valor si es falso); */    
    
    (scanf("%d", &edad) ==1 && edad > 0) /*es 1 si se ingresa un número 0 si no lo es*/
    ? printf("\n%d años es una edad válida\n",edad)
    : printf("Error: ingrese una edad válida\n");

/*-----------------------------------------------------------------*/
return 0;
}

