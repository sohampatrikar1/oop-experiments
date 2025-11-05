#include <iostream>
using namespace std;

class student {
public:
    int roll_no;
    char name[50];
    char class_name[20];  // use class_name instead of 'class'

    void getdata() {
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Class: ";
        cin >> class_name;
    }

    void displaydata() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << class_name << endl;
    }
};

int main() {
    student s;       // create one object
    s.getdata();     // accept data
    s.displaydata(); // display data
    return 0;
}
