#include <iostream>
using namespace std;

class Sample {
    int data;

public:
    void getdata() {
        cout << "Enter value: ";
        cin >> data;
    }

    void display() {
        cout << data << endl;
    }

    
    friend void swapData(Sample &, Sample &);
};


void swapData(Sample &x, Sample &y) {
    int temp = x.data;
    x.data = y.data;
    y.data = temp;
}

int main() {
    Sample s1, s2;

    cout << "Enter data for first object:\n";
    s1.getdata();

    cout << "Enter data for second object:\n";
    s2.getdata();

    cout << "\nBefore swapping:\n";
    cout << "s1 = "; s1.display();
    cout << "s2 = "; s2.display();

    swapData(s1, s2); // call friend function

    cout << "\nAfter swapping:\n";
    cout << "s1 = "; s1.display();
    cout << "s2 = "; s2.display();

    return 0;
}
