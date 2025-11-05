#include <iostream>
using namespace std;

class Student {
public:
    int roll_no;
    char name[50];

    // Nested class inside Student
    class Address {
    public:
        char city[50];
        int pincode;

        void getAddress() {
            cout << "Enter City: ";
            cin >> city;
            cout << "Enter Pincode: ";
            cin >> pincode;
        }

        void showAddress() {
            cout << "City: " << city << endl;
            cout << "Pincode: " << pincode << endl;
        }
    };

    Address addr;  // object of nested class inside Student

    void getData() {
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
        addr.getAddress();  // calling nested class function
    }

    void displayData() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        addr.showAddress();
    }
};

int main() {
    Student s;
    s.getData();
    s.displayData();
    return 0;
}
