#include <stdio.h>

int main(void)
{
    int edad, ok;

    do
    {
        printf("Ingrese edad:");
        
        ok =  scanf("%d", &edad);
               
        while (getchar() != '\n'); /*Limpia el buffer de entreada, lee los caracteres hasta encontrar un ENTER*/
       
      
/*--------------------------------------------------------------------------------------------------------------*/
/*(confdicion) ? (Si la condición es verdadera) : (Si la condicion es falsa);*/
        (ok == 1 && edad > 0 )
        ? printf("\n%d años es una edad válida\n", edad)
        : printf("\nError: Ingrese una edad válida\n");

    }
/*-------------------------------------------------------------------------------------------------------------*/    
    while(!(ok == 1 && edad > 0 )); /*Mientras se cumpla esta condición se ejecuta el do*/
       
printf("\n"); /*Espacio al final*/
return 0;
}
