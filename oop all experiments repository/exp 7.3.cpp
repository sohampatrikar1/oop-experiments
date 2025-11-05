#include <iostream>
using namespace std;

class Number {
    int x;
public:
    void getData() {
        cout << "Enter number: ";
        cin >> x;
    }
    void operator -() {
        x = -x;
    }
    void display() {
        cout << "Value: " << x << endl;
    }
};
int main() {
    Number n;
    n.getData();
    -n;
    n.display();
    return 0;
}
