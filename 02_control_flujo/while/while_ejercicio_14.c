#include <stdio.h>

int main(void)
{
    int clave = 1234;
    int i = 0;
    int password;
    
    printf("Ingrese clave: ");
    scanf("%d",&password);

    while(password != clave && i < 2) 
    {
        printf("Clave incorrecta\n");
        printf("Ingrese clave: ");
        scanf("%d",&password);

        i += 1;
    }

    if(clave == password)
    {
         printf("Clave correcta\n");

    }
    
    else
    {
        printf("Acceso bloqueado\n");
    }
       
return 0;
}
