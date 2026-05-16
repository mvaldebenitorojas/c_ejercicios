#include <stdio.h>

int main(void)
{
    
    int i, inf, sup, c; /*Declaración de variables*/

    inf = 0;  /*Declaramos el límite inferior*/
    sup = 12; /*Declaramos el límite superior*/
    c = 3; /*Agregamos un contador*/

/*------------------------------------------------------------------*/

    for(i=inf; i<=sup; i+= c) /*Inicia i en inf incrementa en */
    {
        if(i== 5) /* Condición para generar el salto*/
        {
        continue; /*Genera el salto*/
        }
        printf("%d\n", i); /*Imprime el valor en pantalla*/
    }

/*------------------------------------------------------------------*/

return 0;

}
