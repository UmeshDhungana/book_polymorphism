#include <iostream>
#include "Book.h"
#ifndef TEXTBOOK_H
#define TEXTBOOK_H


using namespace std;

class TextBook:public Book
{
private:
    string subject;
    string publisher;
    string edition;
public:
    TextBook(string, Author, double, int, string , string, string);
    void setSubject(string subject);
    void setEdition(string edition);
    string getSubject();
    string getPublisher();
    string getEdition();
    string toString();
};
#endif // TEXTBOOK_H

