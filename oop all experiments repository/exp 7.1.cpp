#include <iostream>
using namespace std;

class Area {
public:
    int calculate(int side) {
        return side * side;
    }
    int calculate(int length, int breadth) {
        return length * breadth;
    }
};
int main() {
    Area a;
    cout << "Area of Classroom (square): " << a.calculate(5) << endl;
    cout << "Area of Laboratory (rectangle): " << a.calculate(5, 10) << endl;
    return 0;
}
