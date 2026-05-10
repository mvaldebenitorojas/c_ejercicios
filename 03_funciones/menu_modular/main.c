#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(void)
{
    int opcion;

    do
    {
        system("clear"); /*Limpia la pantalla*/

        mostrar_menu(); /*Declarado dentro de menu.c*/

        opcion = leer_opcion(); /*Declarado dentro de menu.c*/

            if(opcion == -1)
            
            {
                printf("Error: entrada invalida\n");
                printf("Presione ENTER para continuar...");
            
                while(getchar() != '\n');
            
                continue;
            }

            if(opcion < 1 || opcion > 3)
            {
                printf("Error: entrada invalida\n");
                printf("Presione ENTER para continuar...");

                while(getchar() != '\n');

                continue;
            }
        ejecutar_opcion(opcion); /*Declarado dentro de menu.c*/

    } while(opcion != 3);

    return 0;
}
