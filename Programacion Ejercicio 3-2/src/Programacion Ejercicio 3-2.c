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

void mostrarNumero(int);

int main(void)
{
	setbuf(stdout,NULL);
	int numeroIngresado;

	printf("Ingrese un numero entero:");
	fflush(stdin);
	scanf("%d",&numeroIngresado);
	mostrarNumero(numeroIngresado);

	return EXIT_SUCCESS;
}

void mostrarNumero(int numero)
{
	if(numero % 2 == 0)//numero % 2 = 0
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
