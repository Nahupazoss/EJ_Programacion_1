/*
 ============================================================================
 Name        : Programacion.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
INGRESAR 5 NUMEROS ENTEROS CALCULAR Y MOSTRAR EL PROMEDIO DE LOS NUMEROS.
NAHUEL PAZOS DIV 1K
EJERCICIO 2-1
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	float numero;
	float promedio;
	int acumulador;
	int i;

	acumulador = 0;
	i = 0;

	while(i<5)
	{
		printf("ingresa un numero:\n");
		fflush(stdin);
		scanf("%f",&numero);
		acumulador += numero;
		i++;
	}

	promedio = acumulador / i;

	printf("el promedio de los numeros ingresados es %.2f",promedio);

	return EXIT_SUCCESS;
}
