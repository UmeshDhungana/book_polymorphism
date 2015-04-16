#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(){}

void Book::setPrice(double price)
{
    this->price = price;
}

void Book::setQuantity(int quantity)
{
    this->quantity = quantity;
}

string Book::getName()
{
    return name;
}

Author Book::getAuthor()
{
    return author;
}

double Book::getPrice()
{
    return price;
}

int Book::getQuantity()
{
    return quantity;
}

string Book::toString()
{
    return 0;
}
