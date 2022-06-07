/*
 ============================================================================
 Name        : programa.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
int main(void)
{
	setbuf(stdout,NULL);
	int maximo;
	int minimo;
	int i;
	int bufferInt;
	int flag = TRUE;

	for(i=0;i<10;i++)
	{
		printf("Ingrese un numero: %d\n",i+1);
		fflush(stdin);
		scanf("%d",&bufferInt);
		if(flag == TRUE)//se puede hacer sin flag usando i == 0
		{
			maximo = bufferInt;
			minimo = bufferInt;
			flag = FALSE;
		}
		else
		{
			if(bufferInt == 000)
			{
				break;
			}
			if(bufferInt > maximo){
				maximo = bufferInt;
			}
			if(bufferInt < minimo){
				minimo = bufferInt;
			}
		}
	}
	printf("El valor minimo es: %d y el valor maximo es: %d",minimo,maximo);
	return 0;
}
