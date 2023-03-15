#ifndef BOOK_H_
#define BOOK_H_


typedef struct
{
    char logo;
} book;



void book_print(book const *b_ptr);

#endif /* BOOK_H_ */