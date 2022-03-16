#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    string Owner;
    double Balance;
public:
    Account(int = 0);
    //~Account(){cout << "Account::destructor\n";};
    double getBalance(void){return Balance;};
    string getName (void){return Owner;};
    //virtual
    string getAccountType(void){return "Account";};
};

Account::Account(int bal) : Balance(bal) {
    Owner = "No owner";
    //s("No owner"); /* equivalent to above */
}

/*
 *
 */
class InternetAccount : public Account {
//class InternetAccount : virtual public Account {
    string Username;
public:
    InternetAccount(int = 0);
    //~InternetAccount(){cout << "InternetAccount::destructor\n";};
    string getAccountType(void) {return "InternetAccount";};
};

InternetAccount::InternetAccount(int bal) {
    Balance = bal;
}

/*
 *
 */
class PaperAccount : public Account {
//class PaperAccount : virtual public Account {
    string Address;
public:
    //~PaperAccount(){cout << "PaperAccount::destructor\n";};
    PaperAccount(int bal = 0);
    string getAccountType(void) {return "PaperAccount";};
};

PaperAccount::PaperAccount(int bal) {
    Balance = bal;
}

/*
 *
 */
class SavingsAccount : public InternetAccount, public PaperAccount {
    int AccountNumber;
public:
    SavingsAccount(int, int);
    //~SavingsAccount(){cout << "SavingsAccount::destructor\n";};
    string getAccountType(void) {return "SavingsAccount";};
    int getAccountNumber(void){return AccountNumber;};
};

SavingsAccount::SavingsAccount(int acctNo, int bal = 0) {
    AccountNumber = acctNo;
    PaperAccount::Balance = bal;
    InternetAccount::Balance = bal;
    //Balance = bal; //why doesn't this work?
}

/*
 *
 */
int main(int argc, char** argv) {

    Account a1(1);
    cout << "type is: " << a1.getAccountType() << '\n';
    a1.getBalance();
    cout << a1.getName()  << '\n';

    InternetAccount ia(2);
    cout << "type is: " << ia.getAccountType() << '\n';
    ia.getBalance();
    cout << ia.getName()  << '\n';

    PaperAccount pa(3);
    cout << "type is: " << pa.getAccountType() << '\n';
    pa.getBalance();
    cout << pa.getName()  << '\n';

    SavingsAccount sa(12345);
    cout << "type is: " << sa.getAccountType() << '\n';
    //a4.getBalance();
    cout << "acct number: " << sa.getAccountNumber() << '\n';

    Account * a = &ia;
    cout << "\ntype of internet account is: " << a->getAccountType() << '\n';
    a->getBalance();

    a = &pa;
    cout << "type of paper account is: " << a->getAccountType() << '\n';
    a->getBalance();

    /* *
    a = &sa; 
    cout << "type is: " << a->getAccountType() << '\n';
    a->getBalance();
    // */
    return 0;
}
