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

int pedirNumero();

int main(void)
{
	setbuf(stdout,NULL);

	pedirNumero();

	return EXIT_SUCCESS;
}

int pedirNumero()
{
	int numeroIngresado;

	printf("Ingrese un numero:");
	scanf("%d",&numeroIngresado);

	return printf("\nEl numero ingresado fue: %d",numeroIngresado);

}
