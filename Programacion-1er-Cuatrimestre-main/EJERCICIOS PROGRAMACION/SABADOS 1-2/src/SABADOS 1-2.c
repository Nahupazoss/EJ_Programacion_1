/*
 ============================================================================
 Name        : SABADOS.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en qué orden fue ingresado.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	int numeroMaximo;
	int numeroMinimo;
	int bandera;
	int banderaDos;
	int i;

	bandera = 0;
	banderaDos=0;
	i=0;

	while(i < 5)
	{
		printf("Ingresar numero:\n");
		scanf("%d",&numero);

		if(numero > numeroMaximo || bandera == 0)
		{
			numeroMaximo = numero;
			bandera = 1;
		}

		if(numero < numeroMinimo || banderaDos == 0)
		{
			numeroMinimo = numero;
			banderaDos=1;
		}

		i++;
	}

	printf("El numero maximo ingresado fue: %d",numeroMaximo);
	printf("\nEl numero menor ingresado fue: %d",numeroMinimo);

	return EXIT_SUCCESS;
}
