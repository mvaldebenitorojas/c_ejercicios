#include <stdio.h>

int main(void)
{

    int numeros[5] = {10, 20, 30, 40, 50}; /*reservan espacios para 5 enteros */

    int i, c, inf, sup; /*Declaracion de variables*/
    inf = 0;
    sup = 5;
    c = 1;
    /*----------------------------------------*/
    
    for(i = inf; i < sup; i += c)
    {
        printf("Elemento [%d] = %d\n", i, numeros[i]);
    }


return 0;
}
