#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("First.txt");
    string word;
    int count = 0;
    while (fin >> word)
        count++;
    fin.close();
    cout << "Total Words: " << count << endl;
    return 0;
}
