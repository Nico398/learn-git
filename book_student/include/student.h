#ifndef STUDENT_H_
#define STUDENT_H_

#define STUDENT_MAX_NAME_LENGTH (25U)

typedef struct
{
    int id;
    char name[STUDENT_MAX_NAME_LENGTH];
    char alias[STUDENT_MAX_NAME_LENGTH];
} student;

void student_init(student *s_ptr, const int id[], const char name[STUDENT_MAX_NAME_LENGTH], const char alias[STUDENT_MAX_NAME_LENGTH]); //id hinzugefügt


void student_print(student const *s_ptr);

#endif /* STUDENT_H_ */