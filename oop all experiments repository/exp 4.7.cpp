#include <iostream>
using namespace std;

class Number {
    int n;
public:
    void setData(int x) { n = x; }
    void display() { cout << n << endl; }
    friend void swapNumbers(Number&, Number&);
};
void swapNumbers(Number& x, Number& y) {
    int temp = x.n;
    x.n = y.n;
    y.n = temp;
}
int main() {
    Number n1, n2;
    n1.setData(5);
    n2.setData(10);
    cout << "Before swapping:\n";
    n1.display();
    n2.display();
    swapNumbers(n1, n2);
    cout << "After swapping:\n";
    n1.display();
    n2.display();
    return 0;
}
