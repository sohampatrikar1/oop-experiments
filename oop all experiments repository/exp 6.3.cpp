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
    int roll;
public:
    void getRoll() {
        cout << "Enter roll no: ";
        cin >> roll;
    }
    void display() {
        cout << "Student Name: " << name << ", Roll: " << roll << endl;
    }
};
class Teacher : public Person {
    char subject[50];
public:
    void getSubject() {
        cout << "Enter subject: ";
        cin >> subject;
    }
    void display() {
        cout << "Teacher Name: " << name << ", Subject: " << subject << endl;
    }
};
int main() {
    Student s;
    Teacher t;
    s.getName();
    s.getRoll();
    t.getName();
    t.getSubject();
    s.display();
    t.display();
    return 0;
}
