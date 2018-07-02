#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    if ((((Employee*)pEmployeeA)->name==((Employee*)pEmployeeB)->name) && (((Employee*)pEmployeeA)->lastName==((Employee*)pEmployeeB)->lastName))
    {
    return 1;
    }

    return 0;
}


void employee_print(Employee* this)
{
    printf("%d--%s\n", this->id, this->name);

}


Employee* employee_new(void)
{
    Employee* returnAux = (Employee*)malloc(sizeof(Employee));

    return returnAux;
}

void employee_delete(Employee* this)
{
    free(this);

}

int employee_setId(Employee* this, int id)
{

    this->id = id;
    return 0;

}

int employee_getId(Employee* this)
{

    int id;
    id = this->id;
    if(id!=0)
    {
        return id;
    }
    return 0;

}


