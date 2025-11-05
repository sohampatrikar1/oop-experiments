#include <iostream>
using namespace std;

class Result1 {
public:
    float marks;
    void getdata() {
        cout << "Enter marks for Result 1: ";
        cin >> marks;
    }
};

class Result2 {
public:
    float marks;
    void getdata() {
        cout << "Enter marks for Result 2: ";
        cin >> marks;
    }
};

int main() {
    Result1 r1;
    Result2 r2;
    r1.getdata();
    r2.getdata();
    float avg = (r1.marks + r2.marks) / 2;
    cout << "Average Marks = " << avg << endl;
    return 0;
}
