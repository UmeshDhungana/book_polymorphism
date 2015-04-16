#include <iostream>
#include "Book.h"
using namespace std;

#ifndef NOVEL_H
#define NOVEL_H

class Novel: public Book{
private:
    bool isHardCover;
    string genre;
    string publisher;

public:
    Novel(string, Author, double, int, bool, string, string);
    bool getCover();
    string getGenre();
    string getPublisher();
    string toString();

};
#endif //NOVEL_H
