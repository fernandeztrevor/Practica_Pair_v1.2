#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

#define AL_INCREMENT      10
#define AL_INITIAL_VALUE  10
/*
int resizeUp(ArrayList* this)
{
    int returnaux =-1;
    void* aux;

    if (this != NULL)
    {
        aux = realloc(this->pElements, sizeof(void*)*(this->reservedSize+AL_INCREMENT));
        if (aux!=NULL)
        {
            this->pElements=aux;
            this->reservedSize=this->reservedSize+AL_INCREMENT;
            returnaux=0;
        }
    }
    return returnaux;
}*/
