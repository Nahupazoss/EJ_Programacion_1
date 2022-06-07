/*
 ============================================================================
 Name        : calse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>//!!!!!!!!!!!

int main(void)
{
	setbuf(stdout,NULL);
	char palabras[50];
	char nombre[20];

	printf("Ingrese su nombre: \n");
	fflush(stdin);
	fgets(palabras,50,stdin);//guarda en algun lado en este caso stdin // scanf("%[^\n]",palabras);cuando detecte hasta un enter

	printf("\nsu nombre es: %s",palabras);

	if(strcmp(palabras,nombre)==0)
	{

	}



	//tam = strlen(palabras);

	//printf("\n%d",tam);

		//destino  origen
	strcpy(nombre,palabras);

	printf("\nsu nombre es: %s",nombre);

	return EXIT_SUCCESS;
}
