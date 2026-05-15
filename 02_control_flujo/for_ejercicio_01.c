#include <stdio.h>


int main(void)
{

    int n; // número 
    int inf = 1; // Límite inferior en que número comienza a contar n
    int sup = 20; // Límite superior para n
    int c = 1; // contador

    for (n = inf; n <= sup; n += c) // (inicio; condición; incremento), si c = 1, números naturales, si c = 2, números impares
    {
        printf("%d\n", n); // imprime es valor de n usando %d 
    }

return 0;

}

