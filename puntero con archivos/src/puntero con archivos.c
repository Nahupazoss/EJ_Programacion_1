/************************ main.c ********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"

#define CANTIDAD 300

int main()
{
    char name[51], lastName[51], id[10], isEmpty[10];
    int i, cantidad;

    ePersona* array[CANTIDAD];
    FILE * pFile;//a

    /*
    0X001 0X100 hasta 0X206 0
    0X002 0X500 hasta 0X606 1
    0X003 0X700 hasta 0X806 2
    array == &array[0] == 0X001
    */

    pFile = fopen("hola.txt", "r");

    i = 0;

    /* Lee los titulos */
    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

    while(!feof(pFile)){
        /* Lee los datos */
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

        array[i] = persona_new();
        persona_setId(array[i], atoi(id)); //atol atof
        persona_setName(array[i],name);
        persona_setLastName(array[i],lastName);

        if(strcmp(isEmpty,"true") == 0)
            persona_setIsEmpty(array[i],1);
        else
            persona_setIsEmpty(array[i],0);

        i++;
    }

    cantidad = i;

    printf("ID\tName\tLast\tName\n");
    for (i=0; i<cantidad; i++)
    {
        if(persona_getIsEmpty(array[i]) == 1)
            printf("%4d\t%-15s\t%15s\n" ,
               persona_getId(array[i]),
               persona_getName(array[i]),
               persona_getLastName(array[i]));
    }

    fclose(pFile);

    return 0;
}





