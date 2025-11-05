#include <iostream>
using namespace std;

class ILogin {
protected:
    char name[50];
    char password[50];
public:
    virtual void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;
    }
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
    }
};

class EmailLogin : public ILogin {
public:
    void accept() {
        cout << "Enter Email ID: ";
        cin >> name;
        cout << "Enter Email Password: ";
        cin >> password;
    }
    void display() {
        cout << "Email ID: " << name << endl;
        cout << "Email Password: " << password << endl;
    }
};

class MembershipLogin : public ILogin {
public:
    void accept() {
        cout << "Enter Membership ID: ";
        cin >> name;
        cout << "Enter Membership Password: ";
        cin >> password;
    }
    void display() {
        cout << "Membership ID: " << name << endl;
        cout << "Membership Password: " << password << endl;
    }
};

int main() {
    ILogin *ptr;
    EmailLogin e;
    MembershipLogin m;

    ptr = &e;
    ptr->accept();
    ptr->display();

    ptr = &m;
    ptr->accept();
    ptr->display();

    return 0;
}
