#include <iostream>
#include "Author.h"

using namespace std;

Author::Author()
{
}

Author::Author(string name, string gender, string email)
{
    this->name =  name;
    this->gender = gender;
    setEmail(email);
}

void Author::setEmail(string authorEmail)
{
    this->email = email;
}

string Author::getName()
{
    return name;
}

string Author::getGender()
{
    return gender;
}

string Author::getEmail()
{
    return email;
}

string Author::toString()
{
    return getName() + " at " + getEmail();
}
