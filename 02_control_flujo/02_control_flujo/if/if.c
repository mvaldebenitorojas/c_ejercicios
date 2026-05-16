#include<stdio.h>

int main(void){

	int numero;

	printf("Ingrese un número: ");
	scanf("%d",&numero);

	if(numero == 0){
		
		printf("El número ingresado es cero!!\n");
	}

	if(numero > 0){

		printf("Número es Positivo\n");
	}

	if(numero < 0){

		printf("Número es Negativo\n");
	}
	return 0;
}
		
