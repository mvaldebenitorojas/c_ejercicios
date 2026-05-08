#include <stdio.h>

int main(void){

	int numero_1, numero_2, suma; 
	

	printf("Ingrese el primer número: ");
	scanf("%d",&numero_1);

	printf("Ingrese el segundo número: ");
	scanf("%d",&numero_2);

	printf("El primero número ingresado es: %d\n", numero_1);
	printf("El segundo número ingresado es: %d\n", numero_2);

	suma = numero_1 + numero_2;

	printf("La suma de los dos números es: %d\n", suma);


	
	return 0;
}
