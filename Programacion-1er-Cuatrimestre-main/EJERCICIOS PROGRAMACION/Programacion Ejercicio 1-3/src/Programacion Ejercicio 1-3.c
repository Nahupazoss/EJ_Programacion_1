/*
 ============================================================================
 Name        : Programacion.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 INGRESAR 3 NUMEROS Y MOSTRAR EL NUMERO DEL MEDIO SOLO SI EXISTE. EN CASO DE QUE NO EXISTA TAMBIEN INFORMARLO.
 NAHUEL PAZOS DIV 1K
 EJERCICIO 1-3
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroMedio;

	printf("Ingrese su primer numero:\n");
	fflush(stdin);
	scanf("%d",&numeroUno);

	printf("Ingrese su segundo numero:\n");
	fflush(stdin);
	scanf("%d",&numeroDos);

	printf("Ingrese su tercer numero:\n");
	fflush(stdin);
	scanf("%d",&numeroTres);
	//a>b && a<c || a<b && a>c
	if(numeroUno != numeroDos && numeroUno != numeroTres && numeroDos != numeroTres)
	{
		if((numeroUno > numeroDos && numeroUno) || (numeroUno < numeroDos && numeroUno > numeroTres))
		{
			numeroMedio = numeroUno;
		}
		else
		{
			if((numeroDos > numeroUno && numeroDos < numeroTres) || (numeroDos < numeroUno&& numeroDos > numeroTres))
			{
				numeroMedio = numeroDos;
			}
			else
			{
				if((numeroTres > numeroUno && numeroTres < numeroDos)||( numeroTres < numeroUno && numeroTres > numeroDos))
				{
					numeroMedio = numeroTres;
				}
			}
		}
	}
	else
	{
		printf("No existe numero del medio");
	}

	printf("El numero del medio es %d",numeroMedio);
	return EXIT_SUCCESS;
}
