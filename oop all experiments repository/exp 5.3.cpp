#include <iostream>
using namespace std;

class College {
    int roll_no;
    char name[50];
    char course[50];
public:
    College() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
        for (int i = 0; i < 19; i++) course[i] = "Computer Engineering"[i];
        course[19] = '\0';
    }
    void display() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};
int main() {
    College c1, c2;
    c1.display();
    c2.display();
    return 0;
}
