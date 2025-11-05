#include <iostream>
using namespace std;

class Sports {
protected:
    int score;
public:
    void getScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};
class Academics {
protected:
    int marks;
public:
    void getMarks() {
        cout << "Enter academic marks: ";
        cin >> marks;
    }
};
class Student : public Sports, public Academics {
public:
    void display() {
        cout << "Sports Score: " << score << endl;
        cout << "Academic Marks: " << marks << endl;
    }
};
int main() {
    Student s;
    s.getScore();
    s.getMarks();
    s.display();
    return 0;
}
