#include <iostream>
using namespace std;

class Result1 {
public:
    float marks1;

    void getdata() {
        cout << "Enter marks for Result 1: ";
        cin >> marks1;
    }
};

class Result2 {
public:
    float marks2;

    void getdata() {
        cout << "Enter marks for Result 2: ";
        cin >> marks2;
    }
};

int main() {
    Result1 r1;
    Result2 r2;
    float average;

    // Input marks
    r1.getdata();
    r2.getdata();

    // Compute average
    average = (r1.marks1 + r2.marks2) / 2;

    cout << "\nAverage Marks = " << average << endl;

    return 0;
}
