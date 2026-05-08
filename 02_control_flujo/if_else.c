#include <stdio.h>

int main(void){

	int numero;

	printf("Ingrese un número: ");
	scanf("%d", &numero);

	if(numero == 0){

		printf("El número ingresado es cero!\n");}
	

	else if(numero < 0 ){
		
		printf("El número ingresado negativo!\n");}

	else{

		printf("El número ingresado es positivo\n");}


	return 0;
}
