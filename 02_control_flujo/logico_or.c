#include <stdio.h>
#include <ctype.h> /*biblioteca para validar el tipo de ingreso*/

int main (void){

    char letra;

    printf("Ingrese una letra: "); /*Ingreso de información*/
    scanf("%c", &letra);

    letra = tolower(letra);
/*---------------------------------------------*/

    if (isalpha(letra)) /*Valida si es una letra*/
    {
        
        if(letra == 'a' || 
           letra == 'e' || 
           letra == 'i' || 
           letra == 'o' || 
           letra == 'u')
        {
           printf("Es una vocal\n");
        }
        else 
        {
          printf("Es una consonante\n");
        }
     }
/*---------------------------------------------*/
    
    else if(isdigit(letra)) /*Valida si es un número*/
    {
        printf("Ingresaste un número\n");
    }
/*---------------------------------------------*/
    
    else /*Si lo ingresado no es ni letra ni un número*/
    {
        printf("Ingresaste un caracter\n");
    }
    
    return 0;
}

