#include <iostream>
using namespace std;

class Account {
public:
    int acc_no;
    float balance;

    void getdata() {
        cout << "Enter Account Number: ";
        cin >> acc_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void giveInterest() {
        if (balance >= 5000)
            balance = balance + (balance * 0.10); // 10% interest
    }

    void display() {
        cout << "Account No: " << acc_no << " | Balance: " << balance << endl;
    }
};

int main() {
    Account a[10];

    cout << "Enter details of 10 accounts:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nAccount " << i + 1 << ":\n";
        a[i].getdata();
        a[i].giveInterest();
    }

    cout << "\n--- Accounts After Interest (if applicable) ---\n";
    for (int i = 0; i < 10; i++) {
        a[i].display();
    }

    return 0;
}
