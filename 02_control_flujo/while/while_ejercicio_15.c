#include <stdio.h>
#include <string.h>

int main(void)
{
    char clave[] = "1234"; // Clave tipo char
    char password [20]; //password tipo char
    int i = 0; // contador
    int opcion;
    int a, b;

    while(i < 3 && strcmp(password,clave) != 0) // Inicia intentos y compara password
    {
        printf("Ingrese clave: ");
        scanf("%19s",password); // Limita la cantidad de caracteres de la password

        i ++; // aumenta el contador
    }

    if(strcmp(password, clave) != 0) // Si password y clave son distintos bloquea acceso
    {
         printf("Acceso bloqueado\n");

    }
    
    else
    {
    
    do // Si la clave es correcta ingresa al menu
    {
        printf("    MENU    \n");
        printf("1.- Sumar\n2.- Restar\n3.- salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
      
                if(opcion < 1 || opcion > 3) //Validación de la opción 
                    {
                        printf("Opción iválida\n");
                    }

                else{

                    switch(opcion)
                    {
                    case 1:
            
                    printf("Ingrese dos números: \n");
                    scanf("%d %d", &a, &b);
                    printf("La suma es: %d\n", a + b);
                    break;

                    case 2:

                    printf("Ingrese dos números: \n");
                    scanf("%d %d", &a, &b);
                    printf("La resta es: %d\n", a - b);
                    break;

                    case 3:     

                    printf("Saliendo... \n");
                    break;

                    }
                    }
          
    }
    while(opcion != 3);
    }
    
return 0;
}
