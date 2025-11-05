#include <iostream>
using namespace std;

class Staff {
public:
    char name[50];
    char post[20];

    void getdata() {
        cout << "Enter Staff Name: ";
        cin >> name;
        cout << "Enter Post: ";
        cin >> post;
    }
};

int main() {
    Staff s[5];

    cout << "Enter details of 5 staff members:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStaff " << i + 1 << ":\n";
        s[i].getdata();
    }

    cout << "\nStaff members who are HOD:\n";
    for (int i = 0; i < 5; i++) {
        if (s[i].post[0] == 'H' && s[i].post[1] == 'O' && s[i].post[2] == 'D' && s[i].post[3] == '\0')
            cout << s[i].name << endl;
    }

    return 0;
}
