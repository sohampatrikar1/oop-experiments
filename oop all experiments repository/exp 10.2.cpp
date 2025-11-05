#include <iostream>
#include <string>
using namespace std;

template <class T>
T square(T n) {
    return n * n;
}

template <>
string square<string>(string s) {
    return s + s;
}

int main() {
    cout << square(5) << endl;
    cout << square(string("Hello")) << endl;
    return 0;
}
