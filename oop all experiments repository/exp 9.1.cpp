#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("First.txt", ios::in);
    ofstream fout("Second.txt", ios::out);
    char ch;
    while (fin.get(ch))
        fout.put(ch);
    fin.close();
    fout.close();
    cout << "File copied successfully.";
    return 0;
}
