#include <stdio.h>
#include "menu.h"

/*-------------------------------------------------*/

void mostrar_menu(void)
{
    printf("\n====== MENU ======\n");
    printf("1 - Saludar\n");
    printf("2 - Mensaje\n");
    printf("3 - Salir\n");
}

/*--------------------------------------------------*/

int leer_opcion(void)
{
    int opcion;
    int ok;

    printf("Opcion: ");
    ok = scanf("%d", &opcion);

        if(ok != 1)
        {
            while(getchar() != '\n');
            return -1;
        }

        while(getchar() != '\n');
        return opcion;
}

/*--------------------------------------------------*/

void ejecutar_opcion(int opcion)
{
    switch(opcion)
    {
        case 1:
            printf("\nHola\n");
            while(getchar() != '\n');
            break;

        case 2:
            printf("\nAprendiendo C\n");
            while(getchar() != '\n');
            break;

        case 3:
            printf("Saliendo...\n");
            break;

        default:
            printf("Opcion invalida\n");
            break;
    }
}
