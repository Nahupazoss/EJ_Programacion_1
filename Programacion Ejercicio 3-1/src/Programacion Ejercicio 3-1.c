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

void mostrarNumero(float);

int main(void)
{
	setbuf(stdout,NULL);
	float numeroIngresado;

	printf("Ingrese un numero flotante:");
	fflush(stdin);
	scanf("%f",&numeroIngresado);
	mostrarNumero(numeroIngresado);

	return EXIT_SUCCESS;
}

void mostrarNumero(float numero)
{
	printf("El numero ingresado fue: %f",numero);
}
