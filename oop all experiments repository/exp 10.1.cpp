#include <iostream>
using namespace std;

template <class T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    float b[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1};
    cout << sumArray(a,10) << endl;
    cout << sumArray(b,10) << endl;
    return 0;
}
