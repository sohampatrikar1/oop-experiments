#include <iostream>
using namespace std;

class BankAccount {
    float balance;
public:
    void setData(float b) { balance = b; }
    friend class Audit;
};
class Audit {
public:
    void showBalance(BankAccount b) {
        cout << "Account Balance = " << b.balance << endl;
    }
};
int main() {
    BankAccount acc;
    Audit audit;
    acc.setData(12500.75);
    audit.showBalance(acc);
    return 0;
}
