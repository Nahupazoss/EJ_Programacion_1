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

	if(numeroIngresado >0 && numeroIngresado < 10)
	{
		printf("\nEl numero ingresado es magico");
	}
	else
	{
		printf("...");
	}

	return printf("\nEl numero ingresado fue: %d",numeroIngresado);

}
