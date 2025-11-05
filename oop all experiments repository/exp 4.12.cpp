#include <iostream>
#include <cmath>
using namespace std;

class Point {
    float x, y;
public:
    void setData(float a, float b) {
        x = a;
        y = b;
    }
    friend float distance(Point, Point);
};
float distance(Point p1, Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
int main() {
    Point p1, p2;
    p1.setData(2, 3);
    p2.setData(5, 7);
    cout << "Distance = " << distance(p1, p2) << endl;
    return 0;
}
