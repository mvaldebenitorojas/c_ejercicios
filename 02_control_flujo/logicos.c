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

	if (genero == 'f') /*Condición femenino*/
	{

	if(edad >= 18 && edad <=60) /*comprueba si a edad se encuentra en el rango establecido 18/60 */
	{
		printf("Edad dentro del rango laboral\n"); /*Si cumple la condición*/
	}

	else
	{
		printf("Edad fuera del rango laboral\n"); /*Si no cumple la condición*/
	}
	
	}

/*-------------------------------------------------------------------------------------------------------*/

	else if (genero == 'm') /*Condicion masculino*/
	{

	if(edad >= 18 && edad <=65) /*comprueba si a edad se encuentra en el rango establecido 18/65 */
	
	{
		printf("Edad dentro del rango laboral\n"); /*Si cumple la condición*/
	}

	else
	{
		printf("Edad fuera del rango laboral\n"); /*Si no cumple la condición*/

	}
	
	return 0;
	}
}
