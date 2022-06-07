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

int mostrarMenu(int);

int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	int menu;

	menu = mostrarMenu(opcion);

	return EXIT_SUCCESS;
}

int mostrarMenu(int opcion)
{
	do
	{
		printf("1-Inicializar \n2-Cargar \n3-Mostrar \n4-Calcular Promedio \n5-Ordenar \nOpcion:");
		scanf("%d",&opcion);

		switch(opcion)
		{
			case 1:
				printf("\nUD.Ha seleccionado la opcion 1 inicializar...\n");
			break;

			case 2:

			break;

			case 3:

			break;

			case 4:

			break;

			case 5:

			break;

			default:
				printf("\nHas salido del menu");
			break;
		}
	}
	while(opcion != 6);

	return opcion;
}
