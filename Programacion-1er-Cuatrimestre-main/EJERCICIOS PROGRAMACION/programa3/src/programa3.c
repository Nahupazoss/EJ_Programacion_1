/*
 ============================================================================
 Name        : programa3.c
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
	int numero;

	//JS
	//NUMERO = PROMP("INGRESE NUMERO:");
	setbuf(stdout,NULL);

	printf("Ingrese numero:");
	//FUNCION QUE ESPERA AL INGRESO
	//NUMERO = SCANF(); NO
	scanf("%d",&numero); //NO OLVIDAR EL &

	printf("ingresaste: %d",numero);

	return EXIT_SUCCESS;
}
