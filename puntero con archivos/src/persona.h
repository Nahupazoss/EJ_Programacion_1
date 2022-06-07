/*
 * persona.h
 *
 *  Created on: 2 jun 2022
 *      Author: Rodri
 */

#ifndef PERSONA_H_
#define PERSONA_H_

/******************** persona.h *************************/

#ifndef PERSON_H
#define PERSON_H


typedef struct
{
    unsigned int id;
    char name[51];
    char lastName[51];
    char isEmpty;
}ePersona;


#endif // PERSON_H

ePersona* persona_new();
void persona_delete(ePersona* this);
int persona_setId(ePersona* this, unsigned int id);
int persona_getId(ePersona* this);
int persona_setName(ePersona* this, char* name);
char* persona_getName(ePersona* this);
int persona_setLastName(ePersona* this, char* lastName);
char* persona_getLastName(ePersona* this);
int persona_setIsEmpty(ePersona* this, unsigned int isEmpty);
int persona_getIsEmpty(ePersona* this);

#endif /* PERSONA_H_ */
