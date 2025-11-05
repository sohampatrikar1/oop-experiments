#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];
public:
    void getData() {
        cout << "Enter string: ";
        cin >> str;
    }
    String operator +(String s) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    void display() {
        cout << str << endl;
    }
};
int main() {
    String s1, s2, s3;
    s1.getData();
    s2.getData();
    s3 = s1 + s2;
    cout << "Concatenated String: ";
    s3.display();
    return 0;
}
