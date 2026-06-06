#include <stdio.h>
#include <string.h>

int main(void)
{

    char clave[] = "1234"; //Clave
    char password [20] = ""; //Clave ingresada, se inicializa vacía
    char admin[] = "admin"; //Nombre de administrador
    char version[] = "vers 1.0"; //Versión
    char fecha[] = "2026-06-06"; //Fecha

    int i = 0; //Contador
    int opcion;

    while(i < 3 && strcmp(password, clave) != 0) //Solicita clave de ingreso, 3 intentos
    {
        printf("Ingrese la clave de acceso\n");
        scanf("%19s", password);

        i++; 
    }

    if(strcmp(password, clave) != 0) //Si la clave falla, mensaje de acceso denegado
    {
        printf("Acceso Denegado\n");
    }

    else //Si clave es válida ingresa al menú
    {

    do //Muestra menú y solicita opción de 1 a 4
    {
        printf("    MENU    \n");
        printf("1.Mostrar Usuario\n");
        printf("2.Mostrar Versión\n");
        printf("3.Mostrar Fecha Ficticia\n");
        printf("4.salir\n");
 
        printf("Ingrese una opción: ");
        scanf("%d",&opcion);

        if(opcion < 1 || opcion > 4) //Validación de opción entre 1 y 4
        {
            printf("Opción Inválida"); //Mensaje si opcion no es válida
        }
        else
        {
            switch(opcion) // ingreso a las opciones
            {
            case 1:
                printf("%s\n",admin);
                break;

            case 2:
                printf("%s\n",version);
                break;

            case 3:
                printf("%s\n",fecha);
                break;

            case 4:
                
                printf("Saliendo..\n");
                break;

            }
        }

    }   
    while(opcion != 4); //Termina programa, salida
    }

return 0;
}
