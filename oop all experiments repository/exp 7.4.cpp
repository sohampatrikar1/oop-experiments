#include <iostream>
using namespace std;

class Number {
    int x;
public:
    void getData() {
        cout << "Enter number: ";
        cin >> x;
    }
    void operator ++() {
        ++x;
    }
    void operator ++(int) {
        x++;
    }
    void display() {
        cout << "Value: " << x << endl;
    }
};
int main() {
    Number n;
    n.getData();
    ++n;
    n.display();
    n++;
    n.display();
    return 0;
}
