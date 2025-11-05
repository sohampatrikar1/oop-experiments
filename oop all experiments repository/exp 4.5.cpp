#include <iostream>
using namespace std;

class B;

class A {
    int num1;
public:
    void getdata() {
        cout << "Enter first number: ";
        cin >> num1;
    }
    friend void greatest(A, B);
};

class B {
    int num2;
public:
    void getdata() {
        cout << "Enter second number: ";
        cin >> num2;
    }
    friend void greatest(A, B);
};

void greatest(A x, B y) {
    if (x.num1 > y.num2)
        cout << "Greatest number = " << x.num1 << endl;
    else if (y.num2 > x.num1)
        cout << "Greatest number = " << y.num2 << endl;
    else
        cout << "Both numbers are equal" << endl;
}

int main() {
    A a;
    B b;
    a.getdata();
    b.getdata();
    greatest(a, b);
    return 0;
}
