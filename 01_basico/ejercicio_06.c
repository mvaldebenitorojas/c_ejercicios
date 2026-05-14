#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    system ("clear");

    char nombre [20]; //linea 18
    char ciudad [20]; //Linea 76
    
    int edad; //linea 50
    int valido = 0;
    int i = 0;

    float altura; //linea 63
    float temperatura; // Linea 108

/*----------------------------------------------------------*/

    printf("Ingrese Nombre:");
    scanf("%s", nombre);
    
    while(1)
    {
        valido = 1;
        i = 0;
    
        while (nombre[i] != '\0')
        {
            if (!isalpha(nombre[i]))
        {
            valido = 0;
        
        }
    
        i ++;
    
        }
            if (valido == 1)
            {
                break;
            }
            
                printf("Error: sólo letras permitidas\n");
                
                printf("Ingrese nombre: ");
                scanf("%s", nombre);
    }

/*----------------------------------------------------------*/    
    
    printf("Ingrese la edad: ");

    while (scanf("%d", &edad) != 1 || edad <0)
    {  
        printf("Error: sólo números permitidos\n");
        
        while (getchar() != '\n');

        printf("Ingrese la edad: ");
    }

/*----------------------------------------------------------*/
    
    printf("Ingrese altura: ");
    
    while (scanf("%f", &altura) != 1 || altura <= 0)
    {
        printf("Error: sólo números permitidos\n");

        while (getchar() != '\n');

        printf("Ingrese altura: ");
    }
           
/*---------------------------------------------------------*/

    printf("Ingrese ciudad:");
    scanf("%s", ciudad);
    
    while(1)
    {
        valido = 1;
        i = 0;
    
        while (ciudad[i] != '\0')
        {
            if (!isalpha(ciudad[i]))
        {
            valido = 0;
        
        }
    
        i ++;
    
        }
            if (valido == 1)
            {
                break;
            }
            
                printf("Error: sólo letras permitidas\n");
                
                printf("Ingrese ciudad: ");
                scanf("%s", ciudad);
    }
 
/*---------------------------------------------------------------*/

    printf("Ingrese temperatura: ");
    
    while (scanf("%f", &temperatura) != 1)
    {
        printf("Error: sólo números permitidos\n");

        while (getchar() != '\n');

        printf("Ingrese temperatura: ");
    }
    system("clear"); /*Limpia pantalla*/      
/*-----------------------------------------------------------*/

    printf("----------0----------0----------\n");
    printf("Nombre: %s\n", nombre );
    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f m\n", altura);
    printf("Ciudad: %s\n", ciudad);
    printf("Temperatura: %.2f °C\n", temperatura);
    printf("----------0----------0----------\n\n");

    return 0;
}


