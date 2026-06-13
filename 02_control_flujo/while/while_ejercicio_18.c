#include <stdio.h>
#include <string.h>

int main(void)
{
    // =========================
    // 🔐 SISTEMA (ESTADO)
    // =========================
    char usuario[20] = "admin";
    char password[20] = "1234";

    char input_user[20];
    char input_pass[20];

    int intentos = 0;
    int bloqueado = 0;

    int opcion;

    // =========================
    // 🔐 LOGIN DEL SISTEMA
    // =========================
    while(intentos < 3 && bloqueado == 0)
    {
        printf("Usuario: ");
        scanf("%19s", input_user);

        printf("Password: ");
        scanf("%19s", input_pass);

        if(strcmp(usuario, input_user) == 0 &&
           strcmp(password, input_pass) == 0)
        {
            printf("Acceso concedido\n");
            break;
        }
        else
        {
            printf("Credenciales incorrectas\n");
            intentos++;
        }
    }

    // =========================
    // 🚫 BLOQUEO
    // =========================
    if(intentos >= 3)
    {
        printf("Usuario bloqueado\n");
        return 0;
    }

    // =========================
    // 🖥️ SISTEMA ACTIVO
    // =========================
    do
    {
        printf("\n==== SISTEMA ====\n");
        printf("1.- Ver usuario\n");
        printf("2.- Cambiar password\n");
        printf("3.- Estado del sistema\n");
        printf("4.- Salir\n");

        printf("Ingrese opción: ");
        scanf("%d", &opcion);

        if(opcion < 1 || opcion > 4)
        {
            printf("Opción inválida\n");
        }
        else
        {
            switch(opcion)
            {
                case 1:
                    printf("Usuario: %s\n", usuario);
                    break;

                case 2:
                    printf("Nueva password: ");
                    scanf("%19s", password);
                    printf("Password actualizada\n");
                    break;

                case 3:
                    printf("Intentos: %d\n", intentos);
                    printf("Usuario activo: %s\n", usuario);
                    break;

                case 4:
                    printf("Cerrando sistema...\n");
                    break;
            }
        }

    } while(opcion != 4);

    return 0;
}
