#include <stdio.h>

int main(void){

	int celsius, fahrenheit, c; /*Declaración de variables enteras*/

	c = 5; /*Contador*/

	celsius = 0;

	while (celsius <=100) /*Mientras se cumpla la consdición*/
	{

		fahrenheit = (celsius * 9 / 5) + 32;

		printf("%d °C = %d °F\n", celsius, fahrenheit);

		celsius = celsius + c;
	}

		return 0;

	}

