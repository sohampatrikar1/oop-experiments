#include <iostream>
using namespace std;

class Sum {
    int n, total;
public:
    Sum(int x) {
        n = x;
        total = 0;
        for (int i = 1; i <= n; i++)
            total += i;
    }
    void display() {
        cout << "Sum = " << total << endl;
    }
};
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    Sum s(n);
    s.display();
    return 0;
}
