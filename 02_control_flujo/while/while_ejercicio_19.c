#include <stdio.h>
#include <string.h>

int main(void)
{
    // =========================
    // 🔐 SISTEMA (ESTADO)
    // =========================
    char users[3][20] = {"admin", "root", "user1"}; //Se definen 3 usuarios máximo 20 caracteres 
    char pass[3][20] = {"1234", "0000", "1111"}; // Se definen sus contraseñas

    char input_user[20]; // Ingreso de usuario máximo 20 caracteres
    char input_pass[20]; // Ingreso de clave máximo 20 caracteres
    
    printf("Usuario: "); // Se solicita ingresar usuario
    scanf("%19s", input_user); // Se almacena en input_user

    int i = 0; // contador de intentos
    int encontrado = -1; 

    int opcion; // opcion del menú

    // =========================
    // 🔐 LOGIN DEL SISTEMA
    // =========================
    while(i < 3)
    {
	if(strcmp(input_user, users[i]) == 0) // Compara el usuario ingresado con la base de datos
	{
		encontrado = i; // usuario encontrado
		break;
	}

	i++;	// Si no lo encuentra suma un intento
    }
    // =========================
    // 🚫 BLOQUEO
    // =========================
    if(encontrado != -1)
   

    {	    
	printf("Password: "); // Se solicita ingresar clave
   	scanf("%19s", input_pass); // Se almacena en input_pass
 

	if(strcmp(input_pass,pass[encontrado]) == 0)
        {
	printf("Acceso concedido\n"); // Si usuario es encontrado se da acceso
        }
        else
        {
        printf("Password incorrecta\n"); //bloqueo si los intentos fallan
        return 0;
        }
    }	
    else
    {
	printf("Usuario no encontrado\n");
	return 0;
    }	    
    
    // =========================
    // 🖥️ SISTEMA ACTIVO
    // =========================
    do // Ingreso al menú de usuario validado
    {
        printf("\n==== SISTEMA ====\n");
        printf("1.- whoami\n");
        printf("2.- Cambiar password\n");
        printf("3.- Salir\n");

        printf("Ingrese opción: ");
        scanf("%d", &opcion);

        if(opcion < 1 || opcion > 3)
        {
            printf("Opción inválida\n");
        }
        else
        {
            switch(opcion)
            {
                case 1:
                    printf("Usuario: %s\n", users[i]);
                    break;

                case 2:
                    printf("Nueva password: ");
                    scanf("%19s", pass[i]);
                    printf("Password actualizada\n");
                    break;

                case 3:
                    printf("Cerrando sistema...\n");
                    break;
            }
        }

    } while(opcion != 3);

    return 0;
}
