#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll() {
        cout << "Enter roll no: ";
        cin >> roll;
    }
};
class Test : virtual public Student {
protected:
    int marks;
public:
    void getMarks() {
        cout << "Enter test marks: ";
        cin >> marks;
    }
};
class Sports : virtual public Student {
protected:
    int score;
public:
    void getScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};
class Result : public Test, public Sports {
public:
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Total = " << marks + score << endl;
    }
};
int main() {
    Result r;
    r.getRoll();
    r.getMarks();
    r.getScore();
    r.display();
    return 0;
}
