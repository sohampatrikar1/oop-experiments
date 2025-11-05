#include <iostream>
using namespace std;

class Student {
protected:
    char name[50];
public:
    void getName() {
        cout << "Enter student name: ";
        cin >> name;
    }
};
class Marks : public Student {
protected:
    int m1, m2;
public:
    void getMarks() {
        cout << "Enter marks of two subjects: ";
        cin >> m1 >> m2;
    }
};
class Sports {
protected:
    int score;
public:
    void getScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};
class Result : public Marks, public Sports {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Total = " << (m1 + m2 + score) << endl;
    }
};
int main() {
    Result r;
    r.getName();
    r.getMarks();
    r.getScore();
    r.display();
    return 0;
}
