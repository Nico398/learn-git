#include "student.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void student_init(student *const s_ptr, const int id[], const char name[STUDENT_MAX_NAME_LENGTH], const char alias[STUDENT_MAX_NAME_LENGTH]) //alias hinzugefügt
{
    if (s_ptr == NULL)
    {
        printf("\033[4;33mstudent init: invalid data\n\033[0m");
    }
    else
    {
        s_ptr->id = id;                                                               
        strncpy(s_ptr->name, name, strlen(name) + 1);
        strncpy(s_ptr->alias, alias, strlen(alias) + 1); //hinzugefügt
    }
}

void student_print(student const *const s_ptr)
{
    if (s_ptr == NULL)
    {
        printf("\033[4;33mstudent print: invalid data\n\033[0m");
    }
    else
    {
        printf("=====================\n");
        printf("Student: \n");
        printf("id: \033[4;35m%d\033[0m\n", s_ptr->id);
        printf("name: \033[4;35m%s\033[0m\n", s_ptr->name);
        printf("alias: %s\n", s_ptr->alias);
        printf("=====================\n");
    }
}