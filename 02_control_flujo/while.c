#include <stdio.h>

int main(void){

	int celsius, fahrenheit, c, inf, sup; /*Declaración de variables enteras*/

    inf = 0;   /*imite inferior*/
    sup = 300; /*Limite superior*/
    c = 7;     /*Contador*/

	celsius = inf;

	while (celsius <= sup) /*Mientras se cumpla la consdición*/
	{

		fahrenheit = (celsius * 9 / 5) + 32;

		printf("%d °C = %d °F\n", celsius, fahrenheit);
        
        celsius = celsius + c;
	}

		return 0;

	}

