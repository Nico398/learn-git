#ifndef LIBRARY_H_
#define LIBRARY_H_

#include <stdbool.h>

#include "book.h"
#include "student.h"

#define LIBRARY_MAX_NUM_STUDENTS 3
#define LIBRARY_MAX_NUM_BOOKS 1

typedef struct
{

    student student_list[LIBRARY_MAX_NUM_STUDENTS];

    book book_list[LIBRARY_MAX_NUM_BOOKS];
  
} library;


void library_init(library *lib);


student const *library_add_student(library *lib, const int id[], const char name[], const char alias[]); //alias hinzugefügt


void library_list_students(library const *lib);

void library_print_book(library const *lib);


void library_print(library const *lib);

#endif /* LIBRARY_H_ */