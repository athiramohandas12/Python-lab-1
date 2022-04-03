#include <iostream>
using namespace std;
const int m = 50;
class ITEMS
{
    int ItemCode[m];
    float ItemPrice[m];
    int count;
public:
    void CNT(void) { count = 0; }
    void getItem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};
void ITEMS::getItem(void)
{
    cout << "Enter item code :";
    cin >> ItemCode[count];

    cout << "Enter item price : ";
    cin >> ItemPrice[count];
    count++;
}
void ITEMS::displaySum(void) {
    float sum = 0;
    for (int i = 0;i < count;i++)
        sum = sum + ItemPrice[i];
    cout << "\nTotal value : " << sum << "\n";
}
void ITEMS::remove(void) {
    int a;
    cout << "Enter item code : ";
    cin >> a;

    for (int i = 0;i < count;i++)
        if (ItemCode[i] == a)
            ItemPrice[i] = 0;
}
void ITEMS::displayItems(void) {
    cout << "\nCode price\n";
    for (int i = 0;i < count;i++) {
        cout << "\n" << ItemCode[i];
        cout << "  " << ItemPrice[i];
    }
    cout << "\n";
}
int main() {
    ITEMS order;
    order.CNT();
    int ch;
    string rp;
    {
        while (true)

        {

            cout << "\n       Enter your choice   ";
            cout << "\n*********************************";
            cout << "\n1:Add an item";
            cout << "\n2:Display  total value";
            cout << "\n3:Delete an item";
            cout << "\n4:Display all items";
            cout << "\n5:Exit";
            cout << "\n\n Your choice ";
            cin >> ch;

            if (ch == 1)
            {
                order.getItem();
            }
            else if (ch == 2) {
                order.getItem();
                order.displaySum();
            }

            else if (ch == 3) {
                order.getItem();
                order.remove();
            }
            else if (ch == 4) {
                order.getItem();
                order.displayItems();
            }
            cout << "Do you want to continue(y/n): ";
            cin >> rp;
            cout << "*********************************";
            if (rp == "y")
                continue;
            else
                cout << "Exit";

            return false;
        }
    }
}
