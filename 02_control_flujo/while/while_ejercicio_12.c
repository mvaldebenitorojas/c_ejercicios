#include <stdio.h>

int main(void)
{

    int opcion;
    int a, b;

    printf("Ingrese una opción: ");
    scanf("%d", &opcion);

      
    while(opcion != 0)
    {
        if(opcion < 1 || opcion > 4) //Validación de la opción 
            {
                printf("Opción iválida\n");
            }
        else
            {

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

                printf("Ingrese dos números: \n");
                scanf("%d %d", &a, &b);
                printf("La multiplicación es: %d\n", a * b);
                break;

                case 4:

                printf("Ingrese dos números: \n");
                scanf("%d %d", &a, &b);
                printf("La división es: %d\n", a / b);
                break;

                default:

                printf("Opción inválida\n");
                }

            }

            printf("Ingrese una opción: ");
            scanf("%d", &opcion);
    }

    printf("Ingresó cero, se termina el programa\n");

return 0;
}
