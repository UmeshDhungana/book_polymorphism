#include <iostream>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H

class Book{
protected:
    int quantity;
    double price;
    string name;
    Author author;

public:
    Book();
    Book(string, Author, double);
    Book(string , Author , double, int);
    void setPrice (double);
    void setQuantity(int);
    string getName();
    Author getAuthor();
    double getPrice();
    int getQuantity();
    virtual string toString();
};
#endif // BOOK_H

