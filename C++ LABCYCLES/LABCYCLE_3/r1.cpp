#include <iostream>
using namespace std;

class Shape {
protected:
	double d1, d2;
public:
	void get_data(double a, double b) {
		d1 = a;
		d2 = b;
	}
	virtual void display_area() = 0;
};
class Triangle :public Shape {
	double areaOfTriangle;
public:
	void display_area() {
		areaOfTriangle = 0.5 * d1 * d2;
		cout << "Area of the Triangle : " << areaOfTriangle << endl;
	}
};
class Rectangle :public Shape {
	double areaOfRectangle;
public:
	void display_area() {
		areaOfRectangle = d1 * d2;
		cout << "Area of the Rectangle : " << areaOfRectangle << endl;
	}
};

int main() {
	int ch;
	{
		int choice;
		Shape* shapePointer;
		cout << "***Select your option***\n1.Triangle\n2.Rectangle\n3.Quit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			double base, height;
			cout << "Enter the base and height" << endl;
			cin >> base >> height;
			shapePointer = new Triangle;
			shapePointer->get_data(base, height);
			shapePointer->display_area();
			break;
		case 2:
			double length, breadth;
			cout << "Enter the length and breadth" << endl;
			cin >> length >> breadth;
			shapePointer = new Rectangle;
			shapePointer->get_data(length, breadth);
			shapePointer->display_area();
			break;
		default:
			return 0;
		}
		cout << "Do you want to continue?\n1.Continue\n2.Exit" << endl;
		cin >> ch;
	} while (ch == 1);

	return 0;
}