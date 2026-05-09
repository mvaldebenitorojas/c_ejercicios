#include <stdio.h>

int main(void)
{

	char genero; /*femenino o masculino*/
       	
	int edad; /*Declaramos variable*/

	
	printf("Ingrese su genero (f/m): ");
	scanf("%c", &genero);

	printf("Ingrese su edad: ");
	scanf("%d", &edad);

/*-------------------------------------------------------------------------------------------------------*/

	if (genero == 'f' && edad >= 18 && edad <= 60) /*Condición femenino*/
	
	{
		printf("Edad dentro del rango laboral\n"); /*Si cumple la condición*/
	}

/*-------------------------------------------------------------------------------------------------------*/

	else if (genero == 'm' && edad >=18 && edad <= 65 ) /*Condicion masculino*/
		
	{
		printf("Edad dentro del rango laboral\n"); /*Si cumple la condición*/
	}
/*-------------------------------------------------------------------------------------------------------*/
	else
	{
		printf("Edad fuera del rango laboral\n"); /*Si no cumple la condición*/
	}
	
	return 0;
	
}
