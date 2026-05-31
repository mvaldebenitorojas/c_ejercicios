#include <stdio.h>
#include <string.h>

int main(void)
{
    char clave[] = "1234";
    int i = 0;
    char password [20];
    
    printf("Ingrese clave: ");
    scanf("%s",password);

    while(strcmp(password,clave) != 0 && i < 2) 
    {
        printf("Clave incorrecta\n");
        printf("Ingrese clave: ");
        scanf("%s",password);

        i += 1;
    }

    if(strcmp(clave, password) == 0)
    {
         printf("Clave correcta\n");

    }
    
    else
    {
        printf("Acceso bloqueado\n");
    }
       
return 0;
}
