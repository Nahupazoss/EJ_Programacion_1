/*
 ============================================================================
 Name        : Programacion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT 10

int main(void)
{
	setbuf(stdout,NULL);
	int numero[CANT];
	int i;
	int numeroPositivo[CANT];
	int contadorPositivos;
	int numeroNegativo[CANT];
	int contadorNegativos;

	numeroNegativo=0;
	numeroPositivo=0;
	contadorPositivos=0;
	contadorNegativos=0;

	for(i = 0 ; i < CANT ; i++)//pido los 10 numeros
	{
		printf("Ingrese un numero:\n");
		scanf("%d",&numero[i]);
		if(numero[CANT] < 0)
		{
			numeroNegativo[contadorNegativos] = numero[i];
			contadorNegativos++;
		}
		else
		{
			if(numero[CANT] > 1)
			{
				numeroPositivo[contadorPositivos] = numero[i];
				contadorPositivos++;
			}
		}
	}

	for(i = 0 ; i < CANT ; i++)//muestro los 10 numeros
	{
		if(numero < 0)
		{
			printf("\nLa cantidad de numeros negativos es: %d",numeroNegativo[i]);
		}
		else
		{
			if(numero > 1)
			{
				printf("\nLa cantidad de numeros postivos es: %d",numeroPositivo[i]);
			}
		}
		printf("\nEl numero es: %d",numero[i]);


	}



	return EXIT_SUCCESS;
}
