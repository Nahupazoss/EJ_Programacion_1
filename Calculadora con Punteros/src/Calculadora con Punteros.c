/*
 ============================================================================
 Name        : PUNTEROS.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void restar(int,int,int *);
void sumar(int, int,int *);
void multiplicar(int parametro1,int parametro2,int *pResultado);
void dividir(int parametro1,int parametro2,int *pResultado);
int calcular(int,int,void (*pFuncion) (int,int,int *) );

int main(void)
{
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	int auxiliar;
	int opcion;

	printf("Ingrese un numero:\n");
	scanf("%d",&numero1);

	printf("Ingrese un numero:\n");
	scanf("%d",&numero2);

	do
	{
		printf("\n1-Resta\n2-Suma\n3-Multiplicacion\n4-Division\n5-Salir\nOpcion:");
		scanf("%d",&opcion);

		switch(opcion)
		{
		case 1:
			auxiliar = calcular(numero1,numero2,restar);
			printf("\nLa resta de los numeros es: %d\n",auxiliar);
		break;
		case 2:
			auxiliar = calcular(numero1,numero2,sumar);
			printf("\nLa suma de los numeros es: %d\n",auxiliar);
		break;
		case 3:
			auxiliar = calcular(numero1,numero2,multiplicar);
			printf("\nLa multiplicacion de los numeros es: %d\n",auxiliar);
		break;
		case 4:
			auxiliar = calcular(numero1,numero2,dividir);
			printf("\nLa division de los numeros es: %d\n",auxiliar);
		break;
		case 5:
			printf("\nSaliste...");
		break;
		default:
			printf("\nOcion incorrecta....");
		break;
		}
	}while(opcion != 5 );

	return EXIT_SUCCESS;
}

void restar(int parametro1,int parametro2,int *pResultado)
{
	*pResultado = parametro1 - parametro2;
}

void sumar(int parametro1,int parametro2,int *pResultado)
{
	*pResultado = parametro1 + parametro2;
}

void multiplicar(int parametro1,int parametro2,int *pResultado)
{
	*pResultado = parametro1 * parametro2;
}

void dividir(int parametro1,int parametro2,int *pResultado)
{
	*pResultado = parametro1 / parametro2;
}

int calcular(int parametro1,int parametro2,void (*pFuncion) (int,int,int *) )
{
	int auxResultado;
	pFuncion(parametro1,parametro2,&auxResultado);
	return auxResultado;
}
