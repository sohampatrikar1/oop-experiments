#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("First.txt");
    string word, target;
    int count = 0;
    cout << "Enter word to search: ";
    cin >> target;
    while (fin >> word)
        if (word == target)
            count++;
    fin.close();
    cout << "Occurrences of '" << target << "': " << count << endl;
    return 0;
}
