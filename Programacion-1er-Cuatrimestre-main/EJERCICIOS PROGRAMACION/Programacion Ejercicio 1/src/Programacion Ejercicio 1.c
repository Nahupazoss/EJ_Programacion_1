/*
 ============================================================================
 Name        : EJERCICIO.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 INGRESAR DOS NUMEROS ENTEROS SUMARLOS Y MOSTRAR EL RESULTADO
 NAHUEL PAZOS DIV 1K
 EJERCICIO 1
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int suma;

	printf("ingresar numero: \n");
	fflush(stdin);
	scanf("%d",&numeroUno);
	printf("ingresar numero: \n");
	fflush(stdin);
	scanf("%d",&numeroDos);

	suma = numeroUno + numeroDos;
	printf("La suma entre %d y %d da como resultado: %d",numeroUno,numeroDos,suma);

	return EXIT_SUCCESS;
}
