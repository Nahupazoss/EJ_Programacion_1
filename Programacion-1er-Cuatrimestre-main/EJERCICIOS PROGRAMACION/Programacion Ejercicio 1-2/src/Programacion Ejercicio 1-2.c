/*
 ============================================================================
 Name        : EJERCICIO.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 INGRESAR 3 NUMEROS Y MOSTRAR CUAL DE LOS 3 ES MAYOR
 NAHUEL PAZOS DIV 1K
 EJERCICIO 1-2
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroMayor;

	printf("Ingrese su primer numero:\n");
	fflush(stdin);
	scanf("%d",&numeroUno);

	printf("Ingrese su segundo numero:\n");
	fflush(stdin);
	scanf("%d",&numeroDos);

	printf("Ingrese su tercer numero:\n");
	fflush(stdin);
	scanf("%d",&numeroTres);

	if(numeroUno > numeroDos && numeroUno > numeroTres)
	{
		numeroMayor= numeroUno;
	}
	if(numeroDos > numeroUno && numeroDos > numeroTres)
	{
		numeroMayor= numeroDos;
	}
	if(numeroTres > numeroUno && numeroTres > numeroDos)
	{
		numeroMayor = numeroTres;
	}

	printf("El numero mayor de los tres ingresados es: %d\n",numeroMayor);

	system("pause");
	return EXIT_SUCCESS;
}
