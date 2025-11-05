#include <iostream>
using namespace std;

class Sample {
    int a, b;
public:
    Sample() {
        a = 0;
        b = 0;
    }
    Sample(int x) {
        a = x;
        b = 0;
    }
    Sample(int x, int y) {
        a = x;
        b = y;
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};
int main() {
    Sample s1, s2(5), s3(10, 20);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
