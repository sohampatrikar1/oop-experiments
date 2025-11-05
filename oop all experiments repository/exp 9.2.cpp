#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("First.txt");
    char ch;
    int digits = 0, spaces = 0;
    while (fin.get(ch)) {
        if (ch >= '0' && ch <= '9')
            digits++;
        if (ch == ' ')
            spaces++;
    }
    fin.close();
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    return 0;
}
