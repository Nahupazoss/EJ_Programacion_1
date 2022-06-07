/*
 ============================================================================
 Name        : Programacion.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 INGRESAR 10 NUMEROS ENTEROS,DISTINTOS DE CERO.MOSTRAR:
 A-CANTIDAD DE PARES E IMPARES.
 B-EL MENOR NUMERO INGRESADO.
 C-DE LOS PARES EL MAYOR NUMERO INGRESADO.
 D-SUMA DE LOS POSITIVOS.
 E-PRODUCTO DE LOS NEGATIVOS.
 NAHUEL PAZOS DIV 1K
 EJERCICIO 2-2
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	int contadorPares;
	int acumuladorPares;
	int contadorImpares;
	int acumuladorImpares;
	int numeroMenor;
	int numeroParMayor;
	int sumaPositivos;
	int bandera;
	int i;
	int productoNegativos;
	int banderaMayor;

	banderaMayor = 0;
	productoNegativos=1;
	i=0;
	acumuladorPares=0;
	contadorPares=0;
	acumuladorImpares=0;
	contadorImpares=0;
	bandera = 0;
	sumaPositivos=0;

	while(i<10)
	{
		printf("ingrese numero entero\n");
		fflush(stdin);//solo para caracteres
		scanf("%d",&numero);

		if(numero %2 == 0)
		{
			contadorPares++;
			acumuladorPares += contadorPares;
			if(numero > numeroParMayor || banderaMayor == 0 )
			{
				numeroParMayor = numero;
				banderaMayor = 1;
			}
		}
		else
		{
			contadorImpares++;
			acumuladorImpares += contadorImpares;
		}

		if(numero < numeroMenor || bandera == 0)
		{
			numeroMenor = numero;
			bandera=1;
		}
		if(numero >0)
		{
			sumaPositivos += numero;
		}
		else
		{
			productoNegativos = productoNegativos * numero;//producto es la multiplicacion de los numeros.
		}
		i++;
	}

	printf("La cantidad de numeros pares es: %d",contadorPares);
	printf("\nLa cantidad de numeros impares es: %d",contadorImpares);
	printf("\nEl numero menor ingresado es: %d",numeroMenor);
	printf("\nEl numero par mas grande es: %d",numeroParMayor);
	printf("\nLa suma total de los numeros positivos es: %d",sumaPositivos);
	printf("\nEl producto de los negativos es: %d",productoNegativos);
	return EXIT_SUCCESS;
}
/*UTILIZANDO OTRO METODO EN ESTE CASO UN FOR Y SIN UTILIZAR LAS BANDERAS
 	 for(i=0;i<5;i++)
	{
		printf("ingrese numero entero\n");
		fflush(stdin);//solo para caracteres
		scanf("%d",&numero);

		if(numero %2 == 0)
		{
			contadorPares++;
			acumuladorPares += contadorPares;
			if(numero > numeroParMayor || i == 0 )
			{
				numeroParMayor = numero;
			}
		}
		else
		{
			contadorImpares++;
			acumuladorImpares += contadorImpares;
		}

		if(numero < numeroMenor || i == 0)
		{
			numeroMenor = numero;
		}
		if(numero >0)
		{
			sumaPositivos += numero;
		}
		else
		{
			productoNegativos = productoNegativos * numero;//producto es la multiplicacion de los numeros.
		}
	}
*/

