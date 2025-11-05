#include <iostream>
using namespace std;

class Person {
protected:
    char name[50];
public:
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};
class Student : public Person {
protected:
    int roll;
public:
    void getRoll() {
        cout << "Enter roll no: ";
        cin >> roll;
    }
};
class Result : public Student {
    float marks;
public:
    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Result r;
    r.getName();
    r.getRoll();
    r.getMarks();
    r.display();
    return 0;
}
