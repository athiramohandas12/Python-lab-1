#include <iostream>
#include <string>
using namespace std;

class bank
{
    int acc_no[50], balance[50];
    string cust_name[50], acc_type[50];

public:
    int acc_search(int ac_no);
    void new_acc(int count);
    void acc_details(int ac_no);//secret code needed for employee to see all details
    void acc_transaction(int amt, int ac_no);//to withdraw or deposit
    void acc_balance(int ac_no);


};
int bank::acc_search(int ac_no)
{

    int n = 0;
    int ac_check = acc_no[n];
    cout << "\nAcc search check: " << ac_no;
    while (true)
    {
        if (ac_check == acc_no[n])
            break;
        else
            n++;
    }
    return n;
}
void bank::new_acc(int count)// acc no is -ve check
{
    acc_no[count] = 0;
    for (int i = 0; i < 4; i++)//assigning user a 5 digit acc no
        acc_no[count] = acc_no[count] * 10 + rand() % 10;

    cout << "\nEnter the following details\n";
    std::cout << "\nName: ";
    std::cin >> cust_name[count];

    int i = 0;
    while (i == 0)//making the user renter until balance is above 500
    {
        std::cout << "\nInsert amount greater than 500: ";
        std::cin >> balance[count];
        if (balance[count] > 500)
            i = 1;
        else
            continue;
    }

    std::cout << "\nEnter account type: ";
    std::cin >> acc_type[count];

    acc_details(acc_no[count]);

}

void bank::acc_details(int ac_no)
{
    int n = acc_search(ac_no);
    std::cout << "\nAccount no." << "     Name" << "     Account type" << "    bBlance\n";
    std::cout << "   " << acc_no[n] << "        " << cust_name[n] << "    " << acc_type[n] << "          " << balance[n];
}

void bank::acc_transaction(int amt, int ac_no)//withdraw//deposit
{
    int count = acc_search(ac_no);
    int i = 0, abort = 0;
    while (i == 0)//making the user enter until balance is above 500
    {

        if ((balance[count] + amt) > 500)
        {
            i = 1;
            balance[count] += amt;
        }
        else
        {
            std::cout << "\nMinimum balance violated enter lower amt : ";
            std::cin >> amt;
            abort++;
        }
        if (abort == 5)
        {
            std::cout << "Maximum no. of tries exceeded exiting";
            i = 1;
        }
    }
}
void bank::acc_balance(int ac_no)
{
    int count = acc_search(ac_no);
    std::cout << "Your account balance is: " << balance[count];

}



int main()
{
    while (true)
    {
        int inp, ct = 0, ac_no;
        bank b;
        std::cout << "\n1. New bank acount" << "\n2. Withdraw an amount" << "\n3. Deposit an amount" << "\n4. Balance enqiury" << "\n5. Account statement\n";
        std::cin >> inp;
        if (inp == 1)
        {
            b.new_acc(ct);
            ct++;
        }
        if (inp == 2 or inp == 3 or inp == 4 or inp == 5)
        {
            std::cout << "\nEnter account number: ";
            std::cin >> ac_no;
        }
        if (inp == 2)
        {
            int amt;
            cout << "\nEnter amt to withdraw: ";
            cin >> amt;
            amt = -amt;
            cout << "\n Withdraw=" << amt;
            b.acc_transaction(amt, ac_no);
        }
        else if (inp == 3)
        {
            int amt;
            cout << "\nEnter amount to deposit: ";
            cin >> amt;
            b.acc_transaction(amt, ac_no);
        }
        else if (inp == 4)
            b.acc_balance(ac_no);

        else if (inp == 5)
            b.acc_details(ac_no);



        string repeat;
        cout << "\nnDo you want to continue(y/n): ";
        cin >> repeat;
        if (repeat == "y" or repeat == "Y")
            continue;
        else
            return false;


    }
}