#include <stdio.h>

int main(void)
{
    int inf = 1; // Límite inferior
    int sup = 32; // Límite superior
    int c = 2; // Factor multiplicador
    int n; // Número 

    for(n = inf; n <= sup; n *= c) // n = n*2
    {
            printf("%d\n", n); // imprime el valor de n en %d
    }

return 0;
}

