#include <iostream>
using namespace std;

class Book {
public:
    char book_name[50];
    float price;
    int pages;

    void getdata() {
        cout << "Enter Book Name: ";
        cin >> book_name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number of Pages: ";
        cin >> pages;
    }
};

int main() {
    Book b1, b2;

    cout << "Enter details of first book:\n";
    b1.getdata();

    cout << "\nEnter details of second book:\n";
    b2.getdata();

    cout << "\nBook with greater price:\n";
    if (b1.price > b2.price)
        cout << b1.book_name << " has the greater price (" << b1.price << ")";
    else if (b2.price > b1.price)
        cout << b2.book_name << " has the greater price (" << b2.price << ")";
    else
        cout << "Both books have the same price.";

    return 0;
}
