#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void getdata() {
        cout << "Enter time in HH MM SS format: ";
        cin >> hours >> minutes >> seconds;
    }

    void displayTotalSeconds() {
        int total = (hours * 3600) + (minutes * 60) + seconds;
        cout << "\nTotal seconds = " << total << endl;
    }
};

int main() {
    Time t;
    t.getdata();
    t.displayTotalSeconds();
    return 0;
}
