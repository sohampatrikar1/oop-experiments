#include <iostream>
using namespace std;

class ClassB;
class ClassA {
    int a;
public:
    void setData(int x) { a = x; }
    friend int sum(ClassA, ClassB);
};
class ClassB {
    int b;
public:
    void setData(int y) { b = y; }
    friend int sum(ClassA, ClassB);
};
int sum(ClassA x, ClassB y) {
    return x.a + y.b;
}
int main() {
    ClassA a;
    ClassB b;
    a.setData(10);
    b.setData(20);
    cout << "Sum = " << sum(a, b) << endl;
    return 0;
}
