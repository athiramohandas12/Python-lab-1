
#include <iostream>
using namespace std;
class marea
{
public:
	void area(int r);
	void area(int a, int b);
	void area(float p, float q);
	void area(double s);
	void area(double x, double y, double z);
};

void marea::area(int r)
{ 
	std::cout << "Area of circle:" << 3.14 * r * r;
}
void marea::area(int a, int b)
{
	std::cout << "Area of rectangle :" << a * b;
}
void marea::area(float p,float  q)
{
	std::cout << "Area of triangle:" << 0.5 * p * q;
}
void marea::area(double s)
{
	std::cout << "Area of Square:" << s * s;
}
void marea::area(double x, double y, double z)
{
    std::cout << "Area of trapezium:" << 0.5 * (x + y) * z;
}
int main()
{
int r;
int ch;
int a, b;
float p, q;
double s;
double x, y, z;
marea obj;
cout << "\n CALCULATION OF AREA";
cout << "\n1.Area of circle";
cout << "\n2.Area of rectangle";
cout << "\n3.Area of triangle";
cout << "\n4.Area of square";
cout << "\n5.Area of trapezium";
cout << "\n\tEnter your choice";
cin >> ch;
switch (ch)
{
case 1:
	std::cout << "Enter the value of radius of circle \n";
	std::cin >> r;
	obj.area(r);
	break;
case 2:
	std::cout << "Enter th sides of rectangle\n";
    std::cin >> a >> b;
	obj.area(a, b);
	break;
case 3:
	std::cout << "Enter the base and perpendicular height of a triangle";
		std::cin >> p >> q;
		obj.area(p, q);
		break;

case 4:
std::cout << "Enter the side of square\n";
	std::cin >> s;
	obj.area(s);
		break;
case 5:
	std::cout << "Enter the sides of trapezium\n";
std::cin >> x >> y >> z;
obj.area(x, y, z);
		break;
default:
std::cout << "\nThe choice is wrong";
}
return 0;
}
