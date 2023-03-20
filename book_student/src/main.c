#include <stdio.h>
#include <stdlib.h>

#include "library.h"

int main()
{
    long action = 0;

    char *ptr = NULL;
    char input1[30];
    char input2[30];

    int continue_loop = 1;

    library lib;
    library_init(&lib);

#if 1
    /* add already some entries to the database for playing around*/
    student const *s = library_add_student(&lib, 1, "Nicolas Bleck", "Nico398"); //1 hinzugefügt

    s = library_add_student(&lib, 2,"Bandik Nickel", "Banickel"); //2 hinzugefügt

    s = library_add_student(&lib, 3, "Nicolas", "menschenskinder"); //testhinzugefügt

    //library_add_student(&lib, "pinky", "test"); //test hinzugefügt
#endif

    while (continue_loop)
    {
        printf("\033[4;92m========================\n");
        printf("Choose your library action: \n");
        printf("Print All \t\t[1]\n");
        printf("Print Developers \t\t[2]\n");
        printf("Print Logo \t\t[3]\n");
        printf("Exit \t\t\t[8]\n");
        printf("========================\033[0m\n");

        printf("Enter your selection: ");
        scanf("%s", input1);
        action = strtol(input1, &ptr, 10);

        switch (action)
        {
            case 0:
                printf("That was not a valid input!\n");
                break;
            case 1:
                library_print(&lib);
                break;
            case 2:
                printf("Student print ");
                {
                    library_list_students(&lib);
                    //library_add_student(&lib, studentname, alias); //alias hinzugefügt auskommentiert achtung
                }
                break;
            case 3:
                printf("Print Group Logo: \n");

                //library_print_book(&lib);
                book_print(&lib);
                break;
            case 8:
                continue_loop = 0;
                break;
            default:
                printf("That was not a valid input!\n");
                break;
        }
    }
}