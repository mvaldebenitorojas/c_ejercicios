#include <stdio.h>

/*-----------------------------------------------------------*/

void mostrar_menu(void) /*Solo muestra información de menu de opciones*/
{
    printf("\n====MENU====\n");
    printf("1 Saludar\n");
    printf("2 Mensaje\n");
    printf("3 Salir\n");
}

/*-----------------------------------------------------------*/

int leer_opcion(void) /*Se le pide ingresar opción*/
{

    int opcion, ok;

    printf("\nopción: ");
    ok = scanf("%d", &opcion);

    if(ok != 1)
    {
        while(getchar() != '\n');
        return -1;
    }
    
    while(getchar() != '\n');
    return opcion;
    
}

/*------------------------------------------------------------*/

void ejecutar_opcion(int opcion) /*Ejecuta logica según la opción*/
{
    switch(opcion)
    {
        case 1:
            printf("\nHola\n");        
            break;

        case 2:
            printf("\nAprendiendo C\n");
            break;

        case 3:
            printf("\nSaliendo...\n");
            break;

        default:
            printf("Opción inválida\n");
            break;
    }
}

/*-------------------------------------------------------------*/

int main(void) /*Se ejecuta el sistema*/
{
    int opcion;
    
    do
    {
        mostrar_menu();
        
        opcion = leer_opcion();

        if(opcion == -1)
        {
        
            printf("Error: entrada inválida\n");
            continue;
        }

        ejecutar_opcion(opcion);

    } while (opcion != 3);

    return 0;   

}

