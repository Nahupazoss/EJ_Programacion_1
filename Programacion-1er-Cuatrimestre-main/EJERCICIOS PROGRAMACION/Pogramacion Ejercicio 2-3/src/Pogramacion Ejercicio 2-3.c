/*
 ============================================================================
 Name        : Pogramacion.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 DEBEMOS ALQUILAR EL SERVICIO DE TRANSPORTE PARA LLEGAR A MAR DEL PLATA CON UN GRUPO DE PERSONAS Y DEBEMOS OBTENER LOS SIG DATOS:
 NUMERO DE CLIENTE
 ESTADO CIVIL
 EDAD
 TEMPERATURA CORPORAL
 GENERO

 */
//FOR SE LA CANTIDAD DE ITERACIONES
// WHILE NO SE LA CANTIDAD DE ITERACIONES Y NOC SI SE VA A EJECUTAR UNA VEZ
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numeroDeCliente;
	char estadoCivil;
	int edad;
	float temperaturaCorporal;
	char genero;
	char respuesta;
	int contadorViudo60;
	int mujerSolteraJoven;
	int precioPorPasajero;
	int precioConDescuento;
	int bandera;
	int idMujerMasJoven;
	int i;

	i = 0;
	bandera = 0;
	precioPorPasajero = 600;
	contadorViudo60=0;

	do
	{
		printf("Ingrese su edad: ");
		scanf("%d",&edad);
		while(edad < 18)
		{
			printf("\nUsted debe ser mayor de edad,reingrese otra edad:");
			scanf("%d",&edad);
		}

		printf("\nIngrese su numero de cliente: ");
		scanf("%d",&numeroDeCliente);

		printf("\nIngrese su estado civil (c=casado o s=soltero o v=viudo)");
		fflush(stdin);
		scanf("%c",&estadoCivil);
		while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v')
		{
			printf("\nError reingresar s - c - v");
			fflush(stdin);
			scanf("%c",&estadoCivil);
		}
		printf("\nIngrese su temperatura corporal: ");
		fflush(stdin);
		scanf("%f",&temperaturaCorporal);

		printf("\nIngrese su genero: f(femenino) m(masculino) b(no binario):");
		fflush(stdin);
		scanf("%c",&genero);
		while(genero != 'f' && genero != 'm' && genero != 'b')
		{
			printf("\nError,reingrese su genero: ");
			fflush(stdin);
			scanf("%c",&genero);
		}

		if(estadoCivil == 'v' && edad >60)
		{
			contadorViudo60++;
		}

		if(genero == 'f')
		{
			if(edad < mujerSolteraJoven || bandera == 0)
			{
				mujerSolteraJoven = edad;
				idMujerMasJoven = numeroDeCliente;
				bandera = 1;
			}
		}

		i++;

		printf("\nDesea continuar? s(si) n(no)");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta == 's');

	if(i %2 && edad > 60)
	{
		precioConDescuento = precioPorPasajero / 0.25;
	}

	printf("\nLa cantidad de viudos con mas de 60 años es: %d",contadorViudo60);
	printf("\nEl numero de cliente de la mujer soltera mas joven es: %d y su edad es: %d",idMujerMasJoven,mujerSolteraJoven);
	printf("\nEl valor del viaje sin descuento es de: %d",precioPorPasajero);
	printf("\nEl precio final con el descuento aplicado es de: %d",precioConDescuento);

	return EXIT_SUCCESS;
}
