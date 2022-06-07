/*
 ============================================================================
 Name        : programa4.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//pedir dos numeros e imprimir la suma,la resta,la division y la multiplicacion

int main(void)
{
	setbuf(stdout,NULL);
	float numeroUno;
	float numeroDos;
	float suma;
	float resta;
	float division;
	float multiplicacion;

	printf("ingrese un numero:\n");
	fflush(stdin);
	scanf("%f",&numeroUno);
	printf("ingrese otro numero:\n");
	fflush(stdin);
	scanf("%f",&numeroDos);

	suma = numeroUno + numeroDos;
	printf("la suma es: %.2f",suma);

	resta = numeroUno - numeroDos;
	printf("\nla resta es: %.2f",resta);

	division = numeroUno / numeroDos;
	printf("\nla division es: %.2f",division);

	multiplicacion = numeroUno * numeroDos;
	printf("\nla multiplicacion es: %.2f",multiplicacion);

	sleep(6000);
	return EXIT_SUCCESS;
}
