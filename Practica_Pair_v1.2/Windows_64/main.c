#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{

    ArrayList* listaEmpleado = al_newArrayList();

    FILE* pFile;

    parserEmployee(pFile, listaEmpleado);

    for(int i=0; i<listaEmpleado->size; i++)
    {
        employee_print((Employee*)listaEmpleado->pElements[i]);
    }


/*
    Employee* miEmpleado;
    Employee* miEmpleado2;
    Employee* aux;
    int i;

    miEmpleado = (Employee*)malloc(sizeof(Employee));
    miEmpleado = (Employee*)malloc(sizeof(Employee));

    employee_setId(miEmpleado, 7);
    //miEmpleado -> id = 7;
    strcpy(miEmpleado->name, "Juan");
    miEmpleado -> isEmpty=1;
    strcpy(miEmpleado->lastName, "Gomez");

    employee_setId(miEmpleado2, 2);
    //miEmpleado2 -> id = 2;
    strcpy(miEmpleado2->name, "Sol");
    miEmpleado2 -> isEmpty=1;
    strcpy(miEmpleado2->lastName, "Leguizamon");

    //creo arraylist
    listaEmpleado = al_newArrayList();// tengo instanciado en memoria 1 arraylist

    al_add(listaEmpleado, miEmpleado);//agrego el empleado a la lista de empleados
    al_add(listaEmpleado, miEmpleado2);


    printf("Elementos: %d\n", al_len(listaEmpleado));//muestra cantidad de datos cargados

    for(i=0; i<2; i++)
    {
      aux = (Employee*) al_get(listaEmpleado, i);
        employee_print(aux);
    }



    */return 0;
}
