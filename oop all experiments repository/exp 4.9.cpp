#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void setData(float r, float i) {
        real = r;
        imag = i;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    friend Complex add(Complex, Complex);
};
Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main() {
    Complex c1, c2, c3;
    c1.setData(2.5, 3.5);
    c2.setData(1.5, 2.5);
    c3 = add(c1, c2);
    c3.display();
    return 0;
}
