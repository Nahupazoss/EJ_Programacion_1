/*
 ============================================================================
 Name        : texto.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
	setbuf(stdout,NULL);
	char nombre [31];
	char apellido [31];
	char nombreApellido[70];
	int i;
	int cantidad;

	printf("Ingrese su apellido: ");
	fflush(stdin);
	scanf("%[^\n]",apellido);

	printf("Ingrese su nombre: ");
	fflush(stdin);
	scanf("%[^\n]",nombre);
	//toda la cadena a minusq
	strlwr(apellido);
	strlwr(nombre);
	//useamos touper para pasar el primer caracter//SIEMPRE INDICE 0 ASI AGARRA LA PRIMER LETRA EN MAYUS
	apellido[0] = toupper(apellido[0]);
	cantidad = strln(apellido);

	for(i=0;i<cantidad;i++)
	{
		if(apellido[i] == ' ')
		{
			apellido[i + 1] = toupper(apellido[1]);
		}
	}

	strcpy( nombreApellido,apellido );
	strcat(nombreApellido, ", ");
	strcat(nombreApellido, nombre);

	return EXIT_SUCCESS;
}
