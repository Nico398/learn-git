#include "library.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void library_init(library *const lib)
{
    if (lib == NULL)
    {
        printf("\033[4;33mlibrary init: invalid data\n\033[0m");
    }
    else
    {
        for (unsigned int i = 0; i < LIBRARY_MAX_NUM_STUDENTS; ++i)
        {
            lib->student_list[i].id = 0;
            strncpy(lib->student_list[i].name, "", 1);
        }
    }
}


student const *library_add_student(library *const lib, const int id[], const char name[], const char alias[]) //alias hinzugefügt
{
    if (lib == NULL)
    {
        printf("\033[4;33madd student: invalid data\n\033[0m");
    }
    else
    {
        for (unsigned int i = 0; i < LIBRARY_MAX_NUM_STUDENTS; ++i)
        {
            if (lib->student_list[i].id == 0)
            {
                student_init(&(lib->student_list[i]), id, name, alias); //alias hinzugefügt
                return &(lib->student_list[i]);
            }
        }
        printf("Adding a student was not possible. Maximum amount of students reached\n");
    }
    return NULL;
}

void library_list_students(library const *const lib)
{
    if (lib == NULL)
    {
        printf("\033[4;33mInvalid data\n\033[0m");
    }
    else
    {
        printf("Library - Listing Developers:\n");
        for (unsigned int i = 0; i < LIBRARY_MAX_NUM_STUDENTS; i++)
        {
            if (lib->student_list[i].id != 0)
            {
                student_print(&lib->student_list[i]);
            }
        }
    }
}

/*void library_print_book(library const *const lib){
    if (lib == NULL)
    {
        printf("\033[4;33mlibrary print: invalid data\n\033[0m");
    }
    else
    {
        printf("Library - Print Logo:\n");
        for (unsigned int i = 0; i < LIBRARY_MAX_NUM_BOOKS; ++i)
        {
            book_print(&lib->book_list[i]);
        }
    }
}*/

void library_print(library const *const lib)
{
    if (lib == NULL)
    {
        printf("not valid");
    }
    else
    {
        printf("***********************\n");
        printf("Library: \n");
        book_print(lib);
        library_list_students(lib);
        printf("***********************\n");
    }
}

//Neu
void book_print(book const *const b_ptr)
{
    if (b_ptr == NULL)
    {
        printf("\033[4;33mbook print: invalid data\n\033[0m");
    }
    else
    {
        printf(" ________   _________   _____  __   __________   __\n");
        printf("|   _____| |   ___   | |     \\|  | |___    ___| |  |\n");
        printf("|  |       |  |   |  | |  |\\  \\  |     |  |     |  |\n");
        printf("|  |       |  |   |  | |  | \\  \\ |     |  |     |  |\n");
        printf("|  |_____  |  |___|  | |  |  \\  \\|     |  |     |  |\n");
        printf("|________| |_________| |__|   \\__|     |__|     |__|\n");
    
        printf("\n\n");
    
        printf(" ________   _______   _________   ________   ________\n");
        printf("|   __   | |   __  | |   ___   | |   _____| |   _____|\n");
        printf("|  |__|  | |  |__| | |  |   |  | |  |_____  |  |____\n");
        printf("|   __  <  |   _  _| |  |   |  | |____    | |   ____|\n");
        printf("|  |__|  | |  |\\  \\  |  |___|  |  ____|   | |  |_____\n");    
        printf("|________| |__| \\ _\\ |_________| |________| |________|\n");

    }
}