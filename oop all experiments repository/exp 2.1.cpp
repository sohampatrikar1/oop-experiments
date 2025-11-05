#include <iostream>
using namespace std;

class City {
public:
    char name[50];
    long population;

    void getdata() {
        cout << "Enter City Name: ";
        cin >> name;
        cout << "Enter Population: ";
        cin >> population;
    }
};

int main() {
    City c[5];
    int i, maxIndex = 0;

    cout << "Enter details of 5 cities:\n";
    for (i = 0; i < 5; i++) {
        cout << "\nCity " << i + 1 << ":\n";
        c[i].getdata();
    }

    for (i = 1; i < 5; i++) {
        if (c[i].population > c[maxIndex].population) {
            maxIndex = i;
        }
    }

    cout << "\nCity with highest population:\n";
    cout << "Name: " << c[maxIndex].name << endl;
    cout << "Population: " << c[maxIndex].population << endl;

    return 0;
}
