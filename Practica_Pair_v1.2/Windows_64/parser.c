#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    Employee* aux;
    char* var1= (char*)malloc(sizeof(char)*100);
    char* var2= (char*)malloc(sizeof(char)*100);
    char* var3= (char*)malloc(sizeof(char)*100);
    char* var4= (char*)malloc(sizeof(char)*100);

    pFile = fopen("./data.csv", "r");

    if(pFile == NULL)
         {
         printf("El archivo no existe");
         }
         fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);

         do
         {
         fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);
         printf("Lei: %s %s %s %s\n",var1,var2,var3,var4);
         aux = (Employee*)malloc(sizeof(Employee));
         aux->id=atoi(var1);
         strcpy(aux->name, var2);
         strcpy(aux->lastName, var3);
         if(strcmp(var4, "false"))
         {
             aux->isEmpty = 1;
         }else aux->isEmpty = 0;

         al_add(pArrayListEmployee, aux);


         }while(!feof(pFile));
         fclose(pFile);

    return 0;
}
