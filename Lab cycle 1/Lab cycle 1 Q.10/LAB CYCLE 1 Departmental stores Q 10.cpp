



#include<iostream>
using namespace std;
int const m = 50;
class Items
{
	
	int code_no[m];
	float price[m];
	int count;
public:
	void CNT(void) { count = 0; }
	void detail(void);
	void additem(void);
	void remove(void);
	void sum(void);
};

void Items::additem(void)
{
     std::cout << "Enter item code:";
	std::cin >> code_no[count];
	std::cout << "Enter item price:";
	std::cin >> price[count];
}
void Items::remove(void)
{
	int a;
	std::cout << "Enter the item code :";
	std::cin >> a;
	for (int i = 0;i < count;i++)
		if(code_no[i] = a)
			price[i] = 0;
}
void Items::sum(void)
{
	float sum = 0;
	int i = 0;
		for (i = 0;i < count; i++)
		sum = sum + price[i];
	std::cout << "Total value of the order is:" << sum << "\n";

 }
void Items::detail(void)
{
	std::cout << "\n Code  Price\n";
	for (int i = 0; i < count;i++)
	{
		std::cout << "\n<<code_no[i]";
		std::cout << "\n<<price[i]";
	}
	std::cout << "\n";
}
int main()

	{
		Items ord;
		int ch;
			do{
		ord.CNT();


		{

			cout << "Select your option";
			cout << "\n1:Total value of your orders";
			cout << "\n2:Add an item";
			cout << "\n3:Remove an item";
			cout << "\n4:Display the product details";
			cout << "\n5:EXIT";


			cin >> ch;
		}


		switch (ch)
		{
		case 1:ord.sum();break;
		case 2:ord.additem();break;
		case 3:ord.remove();
			break;
		case 4:ord.detail(); 
			break;
		case 5:
			break;
		default: cout << "Error ...... TRY AGAIN";
		}
	}
	while (ch != 5);
	
}
return 0;
}