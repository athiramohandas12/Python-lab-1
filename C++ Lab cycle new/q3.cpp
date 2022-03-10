#include <iostream>
using namespace std;

class Bank {
    string name;
    int acc;
    string type;
    float balance;
public:
    void add_account();
    void trans_deposit();
    void trans_withdraw();
    void acc_details();
};

void Bank::add_account() {
    string a;int b;string c;float d;
    cout << "Enter account holders name  :\n";
    cin >> a;
    cout << "Enter account type :\n";
    cin >> c;
    cout << "Please enter your account number :";
    cin >> b;
    cout << "\n";
    cout << "Insert amount greater than 500 : ";
    cin >> d;
    if (d < 500) {
        cout << "Invalid amount";
    }
    else
        cout << "\n\n";
    name = a;
    acc = b;
    type = c;
    balance = d;
}

void Bank::trans_deposit() {
    cout << "Enter the depositing amount :";
    float a;
    cin >> a;
    balance = balance + a;
    cout << "Transaction Sucessfull";
    cout << "\nAccount balance : " << balance << endl;
}

void Bank::trans_withdraw() {
    cout << "Enter the withdrawing amount :";
    float a;
    cin >> a;
    if (balance >= a and a >= 500) {
        balance = balance - a;
        cout << "Transaction Sucessfull";
        cout << "\nBalance amount : " << balance << endl;
    }
    else { cout << "Your balance :" << balance << "\n!!!INSUFFICIENT BALANCE!!!\n\n"; }
}

void Bank::acc_details() {
    cout << "\n******ACCOUNT STATEMENT*****" << endl;
    cout << "\n" << "Name : " << name << "\n" << "Account number : " << acc << "\n" << "Account type : " << type << "\n";
    if (balance >= 500) {
        cout << "Balance Amount : " << balance;
    }
    else { cout << "INVALID AMOUNT!!!.MINIMUM BALANCE IS 500"; }
}
int main() {
    Bank acc1;
    string ch;
    while (true) {
        cout << "\n\n";
        cout << "\n ***********WELCOME************                               ";

        cout << "\n1) Add an account";
        cout << "\n2) Withdrawal";
        cout << "\n3) Deposit";
        cout << "\n4) Balance enquiry";
        cout << "\n5) Account statement";


        cout << "\n\nEnter your choice : ";cin >> ch;
        if (ch == "1") { acc1.add_account(); }
        else if (ch == "2") { acc1.trans_withdraw(); }
        else if (ch == "3") { acc1.trans_deposit(); }
        else if (ch == "4") { acc1.acc_details(); }
        else if (ch == "5") { acc1.acc_details(); }

        string ch;
        cout << "\n\nDO YOU WANT TO CONTINUE PRESS 'y' IF YES OR ANY OTHER KEY TO EXIT ";
        cin >> ch;
        if (ch == "y")
            continue;
        else
            return false;
    }
}