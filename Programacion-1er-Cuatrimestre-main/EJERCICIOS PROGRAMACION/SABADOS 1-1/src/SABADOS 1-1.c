/*
 ============================================================================
 Name        : SABADOS.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numero;//float
	int contadorPositivos;
	int acumuladorPositivos;
	int promedioPositivos;//float
	int contadorNegativos;
	int acumuladorNegativos;
	int promedioNegativos;//float
	char respuesta;


	contadorPositivos=0;
	acumuladorPositivos=0;
	contadorNegativos=0;
	acumuladorNegativos=0;
	respuesta = 's';

	while(respuesta == 's')
	{
		printf("Ingrese un numero entero:\n");
		scanf("%d",&numero);

		if(numero >0)
		{
			contadorPositivos++;
			acumuladorPositivos +=  contadorPositivos;
		}
		else
		{
			contadorNegativos++;
			acumuladorNegativos += contadorNegativos;
		}

		printf("Ingresa otro numero s/n: \n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}

	promedioPositivos =  acumuladorPositivos / contadorPositivos  ;
	promedioNegativos = acumuladorNegativos / contadorNegativos ;

	printf("El promedio de los positivos es: %d",promedioPositivos);
	printf("\nEl promedio de los negativos es: %d",promedioNegativos);

	return EXIT_SUCCESS;
}
