#include <iostream>
#ifndef AUTHOR_H
#define AUTHOR_H

using namespace std;

class Author{
protected:
    string name;
    string gender;
private:
    string email;

public:
    Author();
    Author(string, string, string);
    void setEmail(string email);
    string getName();
    string getGender();
    string getEmail();
    string toString();
};
#endif // AUTHOR_H
