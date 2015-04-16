#include <iostream>
#include "TextBook.h"
#include <sstream>

using namespace std;

TextBook::TextBook(string name, Author author, double price, int quantity, string subject, string publisher, string edition)
{
    this->name = name;
    this->author = author;
    setPrice(price);
    setQuantity(quantity);
    setSubject(subject);
    setEdition(edition);
    this->publisher = publisher;
}

void TextBook::setSubject(string subject)
{
    this->subject = subject;
}

void TextBook::setEdition(string edition)
{
    this->edition = edition;
}

string TextBook::getSubject()
{
    return subject;
}

string TextBook::getPublisher()
{
    return publisher;
}

string TextBook::getEdition()
{
    return edition;
}

string TextBook::toString()
{
    stringstream price, quantity;
    price << getPrice();
    quantity << getQuantity();

    return "Name: "+ getName() + " Author: "+ author.getName() + " Price: "+ price.str() + " Quantity: " + quantity.str() +
    "\n" + " Subject: " + getSubject() + " Publisher: " + getPublisher() + " Edition: " + getEdition();
}
