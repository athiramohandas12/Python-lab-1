#include<iostream>

class class_2;
class class_1
{
	
	int x, y;
public:
	void getdata()
	{
		std::cout << "Enter a number:";
		std::cin >> x;
		
	}
	void display(void) {
		std::cout << x << "\n";
	}
	friend void exchange(class_1&, class_2&);
};
class class_2
{
	int y;
public: 
	void getdata()
	{ 
		std::cout << "Enter another number:";
		std::cin >> y;
		
	}
	void display(void)
	{
		std::cout << y << "\n";
	}
	friend void exchange(class_1&, class_2&);
};
void exchange(class_1& a, class_2& b)
{
	int temp =a.x;
	a.x = b.y;
	b.y= temp;
}
int main()
{
	class_1 C1;
	class_2 C2;
	C1.getdata();
	C2.getdata();
	std::cout << "Values before exchange" << "\n";
	C1.display();
	C2.display();
	exchange(C1, C2);
    std::cout << "Values after exchange" << "\n";
	C1.display();
	C2.display();
	return 0;
}
