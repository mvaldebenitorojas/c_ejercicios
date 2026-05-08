#include <stdio.h>

int main(void){

	int i,c;
	
	c=1;/*c es un contador que se suma al valor inicial de i*/

	for (i = 20; i >= 0; i = i-c) /*for (inicio ; condicion ; actualizacion)*/
	{
	
		printf("%d\n", i); /*Cuenta descendente*/
	
	}

	printf("\n\n"); /*Espacio en blanco entre las dos secuencias for*/

	for (i = 0; i<=20; i = i+c) /*Cuent ascendente*/
	{
		printf("%d\n",i);
	}
		
	return 0;

}
