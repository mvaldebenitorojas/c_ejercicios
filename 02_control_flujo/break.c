#include <stdio.h>

int main(void)
{

int opcion, ok;



do
{
    printf("----------------");
    printf("\n1.-Saludo\n2.-Salir");
    printf("\nOpción: \n");
   
    ok =  scanf("%d", &opcion);

    if(ok !=1)
    {
        while (getchar()!= '\n');
        printf("Error: Entrada inválida\n");
        continue;
    }
    
     
    if(opcion == 2)
    {
        printf("\nSaliendo...\n");
        break; /*Si la condición se cumple se termina do*/
    }
    else if (opcion == 1)
    {
        printf("\nHola\n");
    }
    else
    {
        printf("Error: Entrada inválida\n");
    }
}
while (1);


return 0;
}
