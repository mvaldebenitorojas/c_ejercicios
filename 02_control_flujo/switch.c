#include <stdio.h>

int main(void)
{

    char opcion = 0;

    while (opcion != 'c')

  {
      printf("\n");      
      printf("Seleccione una opción: \n");
      printf("a: Abrir\n");
      printf("b: Guardar\n");
      printf("c: Salir\n");

      printf("Elija opción: ");
      scanf(" %c",&opcion);

    switch(opcion)
    {
        case 'a':
            printf("\n");
            printf("Abrir\n");
            break;

        case 'b':
            printf("\n");
            printf("Guardar\n");
            break;

        case 'c':
            printf("\n");
            printf("Salir\n");
            break;
        
        default:
            printf("Opción no válida\n");
            break;
    }
  }

    return 0;
    
}
