#include <iostream>
using namespace std;

class Student {
public:
    int roll_no;
    float percentage;

    void getdata() {
        cout << "Enter Roll Number: ";
        cin >> this->roll_no;       // using 'this' pointer
        cout << "Enter Percentage: ";
        cin >> this->percentage;    // using 'this' pointer
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll Number: " << this->roll_no << endl;     // using 'this' pointer
        cout << "Percentage: " << this->percentage << endl;   // using 'this' pointer
    }
};

int main() {
    Student s;
    s.getdata();
    s.display();
    return 0;
}
