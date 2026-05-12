#include <stdio.h>

int main(void)
{
    int edad = 30;
    float altura = 1.80;
    float temperatura = 18.5;
    
    char inicial ='M';
    char nombre [] = "Miguel";
    char ciudad [] = "Viña del Mar";

    printf("Nombre: %s\n", nombre);
    printf("Inicial: %c\n", inicial);
    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f m\n", altura);
    printf("Ciudad: %s\n", ciudad);
    printf("Temperatura: %.2f °C\n", temperatura);
    
    /*
        %d      int     (enteros)
        %f      float   (flotantes)
        %c      char    (caracter)
        %s      str     (string)
        %i      int     (entero, similar a %d)
        %lf     double  (doble)
        %x      hex     (hexadecimal)
        %p      mem     (direccion de memoria)
     */



return 0;
}
