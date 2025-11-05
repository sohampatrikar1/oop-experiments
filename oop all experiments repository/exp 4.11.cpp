#include <iostream>
using namespace std;

class Beta;
class Gamma;
class Alpha {
    int a;
public:
    void setData(int x) { a = x; }
    friend void sumAll(Alpha, Beta, Gamma);
};
class Beta {
    int b;
public:
    void setData(int x) { b = x; }
    friend void sumAll(Alpha, Beta, Gamma);
};
class Gamma {
    int c;
public:
    void setData(int x) { c = x; }
    friend void sumAll(Alpha, Beta, Gamma);
};
void sumAll(Alpha x, Beta y, Gamma z) {
    cout << "Sum = " << x.a + y.b + z.c << endl;
}
int main() {
    Alpha a;
    Beta b;
    Gamma c;
    a.setData(2);
    b.setData(4);
    c.setData(6);
    sumAll(a, b, c);
    return 0;
}
