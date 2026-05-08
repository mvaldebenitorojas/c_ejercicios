#include <stdio.h>

int main(void){

	int celsius;
	int fahrenheit;

	celsius = 0;

	while (celsius <=100){

		fahrenheit = (celsius * 9 / 5) + 32;

		printf("%d °C = %d °F\n", celsius, fahrenheit);

		celsius = celsius + 5;
	}
		return 0;
	}

