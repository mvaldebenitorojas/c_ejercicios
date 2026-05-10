#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("clear"); //Limpia la pantalla
   
    int x = 10; // valor de 10
    int *p = NULL; // asegura que puntero no apunta a nada

    p = &x; // p apunta a dirección de x 

    // x  valor
    // &p direccion, dinde está ese valor
    // *p valor en esa dirección, va a esa drección y lo lee
    
    printf("Valor de x: %d\n", x);
    printf("Dirección de x: %p\n", (void*)&x);

    printf("\n");

    printf("Valor de p (dirección de x): %p\n", (void*)p);
    printf("Valor apuntado por p: %d\n", *p);
    
    return 0;
    
}
