#include <iostream>
using namespace std;

class Student {
    char name[50];
    float percentage;
public:
    Student() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
int main() {
    Student s;
    s.display();
    return 0;
}
