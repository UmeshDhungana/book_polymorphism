#include <iostream>
#include "Novel.h"
#include <sstream>

using namespace std;

Novel::Novel(string name, Author author, double price, int quantity, bool cover, string genre, string publisher)
{
    this->name = name;
    this->author = author;
    setPrice(price);
    setQuantity(quantity);
    isHardCover = cover;
    this->genre = genre;
    this->publisher = publisher;
}

bool Novel::getCover()
{
    return isHardCover;
}

string Novel::getGenre()
{
    return genre;
}

string Novel::getPublisher()
{
    return publisher;
}

string Novel:: toString()
{
    string cover;
    if (getCover() == 1)
        cover = "Yes";
    else if (getCover()== 0)
        cover = "No";

    stringstream price, quantity;
    price << getPrice();
    quantity << getQuantity();

    return " Name: "+ getName() + " Author: "+ author.getName() + " Price: "+ price.str() + " Quantity: "  + quantity.str() +
           "\n" + " Cover: " + cover + " Genre: " + getGenre() + " Publisher: " + getPublisher();
}
