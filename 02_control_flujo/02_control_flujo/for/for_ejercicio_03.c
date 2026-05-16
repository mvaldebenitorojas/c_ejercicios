#include <stdio.h>

int main(void)
{
    int n, inf, sup, suma; // Variables

    inf = 1;
    sup = 100;
    suma = 0;

    for(n = inf; n <= sup ; n++)
    {
        suma += n;

        printf("%d\n", suma);
    }

return 0;
}
