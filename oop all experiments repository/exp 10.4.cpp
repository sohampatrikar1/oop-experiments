#include <iostream>
using namespace std;

template <class T>
class Stack {
    T s[10];
    int top;
public:
    Stack() { top = -1; }
    void push(T x) {
        if (top < 9) s[++top] = x;
    }
    void pop() {
        if (top >= 0) top--;
    }
    void display() {
        for (int i = top; i >= 0; i--)
            cout << s[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();
    return 0;
}
