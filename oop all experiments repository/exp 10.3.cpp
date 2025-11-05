#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) { a = x; b = y; }
    void display() {
        cout << "Sum: " << a + b << endl;
        cout << "Difference: " << a - b << endl;
        cout << "Product: " << a * b << endl;
        cout << "Quotient: " << a / b << endl;
    }
};

int main() {
    Calculator<int> c1(10,5);
    Calculator<float> c2(10.5,5.5);
    c1.display();
    c2.display();
    return 0;
}
