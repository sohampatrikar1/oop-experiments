#include <iostream>
using namespace std;

class Cube;
class Box {
    int volume;
public:
    void setData(int v) { volume = v; }
    friend void findGreater(Box, Cube);
};
class Cube {
    int volume;
public:
    void setData(int v) { volume = v; }
    friend void findGreater(Box, Cube);
};
void findGreater(Box b, Cube c) {
    if (b.volume > c.volume)
        cout << "Box has greater volume" << endl;
    else if (c.volume > b.volume)
        cout << "Cube has greater volume" << endl;
    else
        cout << "Both have equal volume" << endl;
}
int main() {
    Box b;
    Cube c;
    b.setData(50);
    c.setData(40);
    findGreater(b, c);
    return 0;
}
