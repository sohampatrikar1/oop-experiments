#include <iostream>
#include <vector>
using namespace std;

template <class T>
class MyVector {
    vector<T> v;
public:
    void createVector(int n) {
        T val;
        for (int i = 0; i < n; i++) {
            cin >> val;
            v.push_back(val);
        }
    }
    void modifyValue(int index, T newVal) {
        if (index >= 0 && index < v.size())
            v[index] = newVal;
    }
    void multiplyByScalar(T scalar) {
        for (int i = 0; i < v.size(); i++)
            v[i] *= scalar;
    }
    void display() {
        cout << "(";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1)
                cout << ", ";
        }
        cout << ")" << endl;
    }
};

int main() {
    MyVector<int> obj;
    int n;
    cin >> n;
    obj.createVector(n);
    obj.display();
    obj.modifyValue(1, 50);
    obj.display();
    obj.multiplyByScalar(2);
    obj.display();
    return 0;
}
