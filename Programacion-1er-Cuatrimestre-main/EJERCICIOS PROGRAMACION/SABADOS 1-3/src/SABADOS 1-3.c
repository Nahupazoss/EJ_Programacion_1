/*
 ============================================================================
 Name        : SABADOS.c
 Author      : Nahuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar el algoritmo que permita ingresar los datos de los alumnos de una división de la UTN FRA, los datos solicitados son:
Legajo
Tipo cursada(L: "libre" - P: "presencial" – R: "remota")
Cantidad de materias( mas de cero y menos de 8)
Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
Nota promedio (entre 0 y 10)
Edad (validar)
Se debe informar de existir, o informar que no existe , en el caso que corresponda.
a) El Legajo del mejor promedio femenino.
b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
c) El promedio de nota por sexo.
d) La edad y legajo del que cursa más materias. (Sin importar su género)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	char tipoDeCursada;
	int cantidadMaterias;
	char sexo;
	int notaPromedio;
	int edad;
	char respuesta;

	respuesta = 's';

	while(respuesta == 's')
	{
		printf("Que tipo de cursada tiene?(L: libre - P: presencial – R: remota)");
		fflush(stdin);
		scanf("%c",&tipoDeCursada);
		while(tipoDeCursada != 'l' && tipoDeCursada != 'p' && tipoDeCursada != 'r')
		{
			printf("\nError,ingrese l / p / r");
			fflush(stdin);
			scanf("%c",&tipoDeCursada);
		}
		printf("\nIngrese la cantidad de materias cursadas:");
		scanf("%d",&cantidadMaterias);
		while(cantidadMaterias < 0 || cantidadMaterias >8)
		{
			printf("\nError,reingresar su cantidad de materias: (entre 0 y 8)");
			scanf("%d",&cantidadMaterias);
		}
		printf("\nIngrese su nota promedio:");
		scanf("%d",&notaPromedio);
		while(notaPromedio <0 || notaPromedio >10)
		{
			printf("\nError,reingrese su nota promedio:");
			scanf("%d",&notaPromedio);
		}
		printf("\nIngrese su edad:");
		scanf("%d",&edad);
		while(edad < 18)
		{
			printf("\nError,reingresar su edad:");
			scanf("%d",&edad);
		}

		printf("\nDesea continuar s(si) n(no)");
		fflush(stdin);
		scanf("%c",&respuesta);
	}






	return EXIT_SUCCESS;
}
