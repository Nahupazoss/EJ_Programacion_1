/*
 ============================================================================
 Name        : Estructura.c
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

#define TAM 100

typedef struct
{
	char nombre[50];
	float altura;
	int id;
}eAlumno;

eAlumno* alumno_new(void);

eAlumno* alumno_newParametros(char *nombre,float altura,int id);

int alumno_initArray(eAlumno *arrayPunteros[],int limite);

int alumno_buscarLibreArray(eAlumno *arrayPunteros[],int limite);

int alumno_imprimirArray(eAlumno *arrayPunteros[],int limite);

int alumno_buscarPorIdArray(eAlumno *arrayPunteros[],int limite,int id);

int alumno_delteArray(eAlumno *arrayPunteros[],int limete,int indice);

int alumno_agregarAlumnoArray(eAlumno *arrayPunteros[],int limite,char *nombre,float altura,int id);
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
int main(void)
{
	setbuf(stdout,NULL);

	eAlumno* arrayPunterosAlumno[TAM];

	int indiceBorrar;

	if(alumno_initArray(arrayPunterosAlumno, TAM))
	{
		printf("INIT OK");
		if(alumno_agregarAlumnoArray(arrayPunterosAlumno, TAM, "A borrar", 1.85, 111) >=0)
		{
			printf("\nAlta OK\n");
		}

		if(alumno_agregarAlumnoArray(arrayPunterosAlumno, TAM, "ANA", 1.85, 111) >=0)
		{
			printf("\nAlta ok\n");
		}
	}

	alumno_imprimirArray(arrayPunterosAlumno,TAM);

	indiceBorrar = alumno_buscarPorIdArray(arrayPunterosAlumno, TAM, 111);

	if(indiceBorrar >= 0)
	{
		if(!alumno_delteArray(arrayPunterosAlumno, TAM, indiceBorrar))
		{
			printf("\nBORRADO OK\n");
		}
	}

	alumno_imprimirArray(arrayPunterosAlumno,TAM);

	return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////
int alumno_initArray(eAlumno *arrayPunteros[],int limite)
{
	int retorno = -1;
	int i;

	if(arrayPunteros != NULL && limite > 0)
	{
		retorno=0;
		for(i=0;i<limite;i++)
		{
			arrayPunteros[i] = NULL;
		}
	}
	return retorno;
}
////////////////////////////////////////////////////////////////////////////////////////////////
eAlumno* alumno_new(void)
{
	eAlumno *auxiliarP = NULL;

	auxiliarP = (eAlumno*)malloc(sizeof(eAlumno));

	return auxiliarP;
}
////////////////////////////////////////////////////////////////////////////////////////////////
eAlumno* alumno_newParametros(char *nombre,float altura,int id)
{
	eAlumno *punteroAlumno = NULL;
	punteroAlumno = alumno_new();

	if(punteroAlumno != NULL)
	{
		strncpy(punteroAlumno->nombre,nombre,50);
		punteroAlumno->altura = altura;
		punteroAlumno->id = id;

	}
	return punteroAlumno;
}
////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
int alumno_delteArray(eAlumno *arrayPunteros[],int limite,int indice)
{
	int retorno = -1;

	if(arrayPunteros != NULL && indice > 0 && limite >= 0 && arrayPunteros[indice] != NULL)
	{
		retorno = 0;
		free(arrayPunteros[indice]);
		arrayPunteros[indice] = NULL;
	}
	return retorno;
}
////////////////////////////////////////////////////////////////////////////////////////////////
int alumno_buscarLibreArray(eAlumno *arrayPunteros[],int limite)
{
	int retorno = -1;
	int i;

	if(arrayPunteros != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			if(arrayPunteros[i] == NULL)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}
////////////////////////////////////////////////////////////////////////////////////////////////
int alumno_agregarAlumnoArray(eAlumno *arrayPunteros[],int limite,char *nombre,float altura,int id)
{
	int retorno = -1;
	int indiceLibre;

	if(arrayPunteros != NULL && limite > 0 && nombre != NULL && id >= 0)
	{
		retorno = 0;
		indiceLibre = alumno_buscarLibreArray(arrayPunteros, limite);
		printf("indice libre:%d\n",indiceLibre);
		if(indiceLibre >= 0)
		{
			arrayPunteros[indiceLibre] = alumno_newParametros(nombre,altura,id);
		}
	}
	return retorno;
}
////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
int alumno_buscarPorIdArray(eAlumno *arrayPunteros[],int limite,int id)
{
	int retorno = -1;
	int i;

	if(arrayPunteros != NULL && limite > 0 && id >= 0)
	{
		retorno = -2;
		for(i=0;i<limite;i++)
		{
			if(arrayPunteros[i] != NULL && arrayPunteros[i]->id == id)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}
////////////////////////////////////////////////////////////////////////////////////////////////
int alumno_imprimirArray(eAlumno *arrayPunteros[],int limite)
{
	int retorno = -1;
	int i;

	printf("\n=================LISTA=ALUMNOS=================\n");
	if(arrayPunteros != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			if(arrayPunteros[i] != NULL)
			{
				printf("Nombre:%s\tID:%d\tAltura:%2.f\n",arrayPunteros[i]->nombre,arrayPunteros[i]->id,arrayPunteros[i]->altura);
			}
		}
	}
	printf("===============================================\n");
	return retorno;
}
