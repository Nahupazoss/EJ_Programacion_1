/*
 ============================================================================
 Name        : programa1.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MENSAJE "hola mundo ya es hora del recreo\n"

int main(void)
{
	/*alert("hola!");
	document.write("hola!");
	console.log("hola!");*/ //JS
	printf(MENSAJE);

	//TIPO NOMBRE;
	//TIPO NOMBRE=VALOR;

	//%d : int
	//%f : float
	// %c : char
	int i;
	i = 27;
	int j=27;
	float pi = 3.14;
	char letra = 'A';

	printf("precio: %d pesos &d lalala %d\n",i,j);

	printf("precio: %f\n" ,pi);

	printf("letra: %c\n" ,letra);

	return EXIT_SUCCESS;
}
