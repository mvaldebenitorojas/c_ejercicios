#include <stdio.h>
#include <string.h>

int main(void)
{

    char clave[] = "1234"; //Clave
    char password [20] = ""; //Clave ingresada, se inicializa vacía
    char whoami[] = "admin"; //Nombre de administrador
    char version[] = "Sistema versión 1.0"; //Versión
    char pwd[] = "/home/admin"; //pwd

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

    do //Muestra menú y solicita opción de 1 a 5
    {
        printf("==== MENU ====\n");
        printf("1.- whoami\n");
        printf("2.- version\n");
        printf("3.- pwd\n");
        printf("4.- help\n");
        printf("5.- salir\n");
 

        printf("Ingrese una opción: ");
        scanf("%d",&opcion);

        if(opcion < 1 || opcion > 5) //Validación de opción entre 1 y 5
        {
            printf("Opción Inválida\n"); //Mensaje si opcion no es válida
        }
        else
        {
            switch(opcion) // ingreso a las opciones
            {
            case 1:
                printf("%s\n",whoami);
                break;

            case 2:
                printf("%s\n",version);
                break;

            case 3:
                printf("%s\n",pwd);
                break;

            case 4:
                printf("Comandos Disponibles\n");
                printf("whoami\n");
                printf("version\n");
                printf("pwd\n");
                printf("help\n");
                printf("salir\n");
                break;

            case 5:
                
                printf("Cerrando terminal...\n");
                break;

            }
        }

    }   
    while(opcion != 5); //Termina programa, salida
    }

return 0;
}
