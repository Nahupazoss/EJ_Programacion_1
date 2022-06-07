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

typedef struct
{
	char nombre[20];
	char apellido[20];
	int	dni;

}eAlumnos;

int main(void)
{

	eAlumnos * pAlumno;

	pAlumno = newAlumno();

	if(pAlumno != NULL)
	{
		strcpy(pAlumno-> nombre,"Nahuel");
		strcpy(pAlumno-> apellido,"Pazos");
		pAlumno-> dni = 24583107;

		printf("%s\n%s\n%d",pAlumno->nombre,pAlumno->apellido,pAlumno->dni);
	}
	else
	{
		printf("\nError..no se ha podido encontrar memoria.");
	}

	return EXIT_SUCCESS;
}

eAlumnos * newAlumno()
{
	eAlumnos *puntero;

	puntero = (eAlumnos*)malloc(sizeof(eAlumnos));

	return puntero;
}
