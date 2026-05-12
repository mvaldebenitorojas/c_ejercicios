#include <stdio.h>

int main(void)
{
    int edad;
    
    char nombre [20];
    char ciudad [20];
    char inicial;
    
    float temperatura;
    float altura;
 
    printf("------Datos ------\n\n");
    
    printf("Ingrese Nombre:");
    scanf("%s", nombre);
    
    printf("Ingrese su inicial:");
    scanf(" %c", &inicial);

    printf("Ingrese su edad:");
    scanf("%d", &edad);

    printf("Ingrese su altura:");
    scanf("%f", &altura);

    printf("Ingrese su ciudad:");
    scanf("%s", ciudad);

    printf("Ingrese la temperatura:");
    scanf("%f", &temperatura);

    printf("------Datos Ingresados ------\n\n");

    printf("Nombre: %s\n", nombre);
    printf("Inicial: %c\n", inicial);
    printf("edad: %d años\n", edad);
    printf("Altura: %.2f m \n", altura);
    printf("Ciudad: %s\n", ciudad );
    printf("Temperatura: %.2f °C\n", temperatura);

return 0;

}
