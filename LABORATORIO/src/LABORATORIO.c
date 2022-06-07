/*
 ============================================================================
 Name        : LABORATORIO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int, int);

int main(void)
{
	setbuf(stdout,NULL);
	int x , y , z;
	printf("Ingrese un numero:");
	scanf("%d",&x);

	printf("\nIngrese otro numero:");
	scanf("%d",&y);

	z = suma(x,y);

	printf("\nLa suma es: %d",z);

	return EXIT_SUCCESS;
}

int suma(int a, int b)
{
	int total;
	total = a + b;
	return total;
}
