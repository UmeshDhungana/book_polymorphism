#include <iostream>
#include "Book.h"
#include "Novel.h"
#include "TextBook.h"

using namespace std;

int main()
{
    string author, email, gender, name, publisher, genre, subject, edition;
    double price;
    int quantity;
    bool choice, cover;

    cout << "Enter the name of Author:" << endl;
    getline(cin, author);

    cout << "Enter the gender of Author:" << endl;
    getline(cin, gender);

    cout << "Enter the email address of Author:" << endl;
    getline(cin, email);

    cout << "Enter the name of Book:" << endl;
    getline(cin, name);

    cout << "Enter the price of Book:";
    cin >> price;

    cout << "Enter the Quantity of Book" << endl;
    cin >> quantity;

    Author _author(author, email, gender);

    cout<<"Enter 1 for Novel and 0 for TextBook: ";
    cin>> choice;

    if(choice == 1)
    {
        cout<< "Enter 1 if novel is hard cover else 0: ";
        cin>> cover;
        cout<< "Enter genre and publisher of novel: ";
        cin.get();
        getline(cin,genre);
        getline(cin,publisher);

        Novel _novel(name, _author, price, quantity, cover, genre, publisher);
        Book *book1 = &_novel;
        cout << book1-> toString();
    }

    else
    {
        cout<< "Enter subject, edition and publisher of book: ";
        cin>> subject;
        cin>>edition;
        cin.get();
        cin>> publisher;

        TextBook _textbook(name, _author, price, quantity, subject, publisher, edition);
        Book *book2 = &_textbook;
        cout << book2 -> toString();
    }
}
