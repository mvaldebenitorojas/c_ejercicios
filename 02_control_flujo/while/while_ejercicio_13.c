#include <stdio.h>

int main(void)
{
    int clave = 1234; // Clave
    int password; //Clave ingresada
    
    printf("Ingrese clave: "); // Solicita ingresar clave
    scanf("%d",&password); // Guarda la clave en password
    

    while(password != clave) // Vuelve a pedir si la clave ingresada no es correcta
    {
        printf("Clave incorrecta\n");
        printf("Ingrese clave: ");
        scanf("%d",&password);

    }

    printf("Clave correcta"); // Acceso 

return 0;
}
