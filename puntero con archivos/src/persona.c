/*
 * persona.c
 *
 *  Created on: 2 jun 2022
 *      Author: Rodri
 */
/******************** persona.c *************************/

#include <stdlib.h>
#include <string.h>
#include "Persona.h"

/** \brief
 *
 * \return Persona*
 *
 */
ePersona* persona_new()
{
    return malloc(sizeof(ePersona));
}

void persona_delete(ePersona* this)
{
    free(this);
}

int persona_setId(ePersona* this, unsigned int id)
{
    int retorno = -1;
    //validar
    if(this != NULL && id > 0)
    {
        this->id = id;
        retorno = 0;
    }
    return retorno;
}

int persona_getId(ePersona* this)
{
    int retorno=-1;
    //falta validar
    if(this != NULL)
        retorno = this->id;

    return retorno;
}

int persona_setName(ePersona* this, char* name)
{
    int retorno = -1;
    //falta validar
    if(this != NULL && name != NULL)
    {
        strcpy(this->name, name);
        retorno = 0;
    }
    return retorno;
}

char* persona_getName(ePersona* this)
{
    char* retorno = NULL;
    //falta validar
    if(this != NULL)
    {
        retorno = this->name;
    }
    return retorno;
}

int persona_setLastName(ePersona* this, char* lastName)
{
    int retorno=-1;
    //falta validar
    if(this != NULL && lastName != NULL)
    {
        strcpy(this->lastName,lastName);
        retorno = 0;
    }
    return retorno;
}

char* persona_getLastName(ePersona* this)
{
    char* retorno=NULL;
    //falta validar
    if(this != NULL)
    {
        retorno = this->lastName;
    }
    return retorno;
}

int persona_setIsEmpty(ePersona* this, unsigned int isEmpty)
{
    int retorno=-1;
    //validar
    if(this != NULL && isEmpty >= 0)
    {
        this->isEmpty = isEmpty;
        retorno = 0;
    }
    return retorno;
}

int persona_getIsEmpty(ePersona* this)
{
    int retorno = -1;
    //falta validar
    if(this != NULL)
        retorno = this->isEmpty;

    return retorno;
}

