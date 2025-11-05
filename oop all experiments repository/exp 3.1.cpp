#include <iostream>
using namespace std;

class Book {
public:
    char title[50];
    char author[50];
    float price;

    void getdata() {
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;         // object
    Book *ptr;      // pointer to object
    ptr = &b;       // assign address

    ptr->getdata(); // using pointer to access functions
    ptr->display();

    return 0;
}
