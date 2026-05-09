#include <stdio.h>

int main(void)
{
    char opcion;

    do /*Se ejecuta mientras la opción sea distinta a 'c' (Salir)*/
    {
        printf("\n");
        printf("====MENU====\n");
        printf("a: Saludar\n");
        printf("b: Mensaje\n");
        printf("c: Salir\n");

        printf("\n");
        printf("Elija una opción: ");
        scanf(" %c", &opcion);
/*-----------------------------------------------------------------*/

        switch(opcion)
        {
            case 'a':
                
                printf("\n");
                printf("Hola\n");
                
                break;
            
            case 'b':
                
                printf("\n");
                printf("Aprendiendo C\n");

                break;

            case 'c':

                printf("\n");
                printf("Saliendo...\n");

                break;

            default:
                
                printf("\n");
                printf("Opción no válida\n");

        }
/*----------------------------------------------------------------------------------*/
    }

    while(opcion != 'c'); /*Se ejecuta mientras la opción es distinta a 'c' (Salir)*/

/*----------------------------------------------------------------------------------*/
    return 0;

}
