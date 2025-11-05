#include <iostream>
using namespace std;

class Student {
    char name[50];
    float m1, m2, m3;
public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter 3 marks: ";
        cin >> m1 >> m2 >> m3;
    }
    friend void calculateAverage(Student);
};
void calculateAverage(Student s) {
    float avg = (s.m1 + s.m2 + s.m3) / 3;
    cout << "Name: " << s.name << endl;
    cout << "Average = " << avg << endl;
}
int main() {
    Student s;
    s.getdata();
    calculateAverage(s);
    return 0;
}
