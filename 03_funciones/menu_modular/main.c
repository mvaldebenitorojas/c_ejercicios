#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(void)
{
    int opcion;

    do
    {
        system("clear"); /*Limpia la pantalla*/

        mostrar_menu();

        opcion = leer_opcion();

            if(opcion == -1)
            
            {
            printf("Error: entrada invalida\n");
            continue;
            }

        ejecutar_opcion(opcion);

    } while(opcion != 3);

    return 0;
}
