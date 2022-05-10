#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class TAccount {
    string name;
    double balance;
public:
    string getName();
    void setName(string name);
    double getBalance();
    void setBalance(double balance);
    TAccount(string n, double b) : name(n), balance(b) {};
    ~TAccount() {}
    void print();
    TAccount operator+(double obj);
    TAccount operator-(double obj);
    TAccount operator*(double obj);
    TAccount operator=(double obj);
    TAccount operator++();
    TAccount operator++(int notused);
    TAccount operator+=(TAccount object);
    TAccount operator-(TAccount object);
    TAccount operator*(TAccount object);
    bool operator==(TAccount object);
    TAccount operator=(TAccount object);
};

inline string TAccount::getName() {
    return name;
}
inline void TAccount::setName(string n) {
    name = n;
}
inline double TAccount::getBalance() {
    return balance;
}
inline void TAccount::setBalance(double b) {
    balance = b;
}
void TAccount::print() {
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl << endl;
}
TAccount TAccount::operator+(double obj) {
    TAccount tmp("0", 0);
    tmp.name = name;
    tmp.balance = balance + obj;
    return tmp;
}
TAccount TAccount::operator-(double obj) {
    TAccount tmp("0", 0);
    tmp.name = name;
    tmp.balance = balance - obj;
    return tmp;
}
TAccount TAccount::operator=(double obj) {
    TAccount tmp("0", 0);
    tmp.name = name;
    tmp.balance = obj;
    return tmp;
}
TAccount TAccount::operator++() {
    ++balance;
    return *this;
}
TAccount TAccount::operator++(int notused) {
    balance++;
    return *this;
}
TAccount TAccount::operator+=(TAccount object) {
    balance = balance + object.balance;
    return *this;
}
TAccount TAccount::operator-(TAccount object) {
    balance = balance - object.balance;
    return *this;
}
TAccount TAccount::operator*(TAccount object) {
    balance = balance * object.balance;
    return *this;
}
bool TAccount::operator==(TAccount object) {
    if ((name == object.name) && (balance == object.balance)) return true;
    else return false;
}
TAccount TAccount::operator=(TAccount object) {
    balance = object.balance;
    return *this;
}

int main()
{
    TAccount one("Buialo Dmytro", 0.05), two("Mukha Iryna", 500.555), three("MaxNik",2);
    one.print();
    two.print();
    //one.setBalance(one.getBalance()+500);
    one = one + 500.005;
    two = two + 111;
    one.print();
    two.print();
    one += two;
    one.print();
    one = one - 100;
    two = two - 10;
    one.print();
    two.print();
    one = one = 5;
    two = two = 7;
    one.print();
    two.print();
    ++one;
    one++;
    one.print();
    for (int i = 0; i < 3; i++) {
        one += two;
    }
    one.print();
    one = one - two;
    one.print();
    two.print();
    two = two * one;
    one.print();
    two.print();
    one = one - two;
    two = two * one;
    one.print();
    two.print();
    if (one == one) one.print();
    one = two;
    one.print();
    two.print();
    three = one*two - two;
    three.print();
}
