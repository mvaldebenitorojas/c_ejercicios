#include <stdio.h>

int main(){
	int edad = 43;
	float altura = 1.80;
	float peso = 122.1;
	int año = 1982;
	float imc;

	printf("Edad: %d años\n", edad);
	printf("Altura: %.2f metros\n", altura);
	printf("Peso: %.1f kilos\n", peso);
	printf("Año: %d\n", año);

	imc = peso/altura;

	printf("Indice de masa: %.3f\n",imc);

	return 0;

}

