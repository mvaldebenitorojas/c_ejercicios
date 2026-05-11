#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("clear");
    int x;
    int *p = NULL;
    
    printf("Ingrese un número; ");
    scanf("%d", &x);

    p = &x;

    printf("\nValor ingresado: %d\n", x);
    printf("Dirección de x: %p\n", (void*)&x);
    printf("Puntero p: %p\n", (void*)p);
    printf("Valor apuntado por p: %d\n", *p);
    
    
    return 0;
}
