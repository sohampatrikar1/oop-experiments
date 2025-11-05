#include <iostream>
using namespace std;

class Number2; 

class Number1 {
public:
    int num1;

    void getdata() {
        cout << "Enter first number: ";
        cin >> num1;
    }


    friend void findGreatest(Number1, Number2);
};

class Number2 {
public:
    int num2;

    void getdata() {
        cout << "Enter second number: ";
        cin >> num2;
    }

    
    friend void findGreatest(Number1, Number2);
};


void findGreatest(Number1 a, Number2 b) {
    if (a.num1 > b.num2)
        cout << "\nGreatest number = " << a.num1 << endl;
    else if (b.num2 > a.num1)
        cout << "\nGreatest number = " << b.num2 << endl;
    else
        cout << "\nBoth numbers are equal." << endl;
}

int main() {
    Number1 n1;
    Number2 n2;

    n1.getdata();
    n2.getdata();

    findGreatest(n1, n2); 

    return 0;
}
