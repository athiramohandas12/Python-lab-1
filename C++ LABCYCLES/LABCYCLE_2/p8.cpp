#include <iostream>
using namespace std;

class Shape{
protected:
	float area;
public:
	//virtual functions , which are redefined in derived classes
	virtual void getdata()=0;
	virtual void getarea()=0;
};

//class Circle inheriting class Shape.
class Circle:public Shape{
	float radius;
public:
	//modifying the function defined in the base class.
	void getdata(){
		cout<<"Enter Radius of the Circle"<<endl;
		cin>>radius;
	}
	//modifying the function defined in the base class.
	void getarea(){
		area = (22.0/7.0)*radius*radius;
		cout<<"Area of the Circle is "<<area<<endl;
	}
};

//class Square inheriting class Shape.
class Square:public Shape{
	float side;
public:
	//modifying the function defined in the base class.
	void getdata(){
		cout<<"Enter Side of the Square"<<endl;
		cin>>side;
	}
	//modifying the function defined in the base class.
	void getarea(){
		area = side*side;
		cout<<"Area of the Square is "<<area<<endl;
	}
};

//class Ellipse inheriting class Shape.
class Ellipse:public Shape{
	float minorAxis,majorAxis;
public:
	//modifying the function defined in the base class.
	void getdata(){
		cout<<"Enter  Minor Axis of the Ellipse"<<endl;
		cin>>minorAxis;
		cout<<"Enter  Major Axis of the Ellipse"<<endl;
		cin>>majorAxis;
	}
	//modifying the function defined in the base class.
	void getarea(){
		area = (22.0/7.0)*majorAxis*minorAxis;
		cout<<"The Area of the Ellipse is "<<area<<endl;
	}
};

//class Rectangle inheriting class Shape.
class Rectangle:public Shape{
	float length,breadth;
public:
	//modifying the function defined in the base class.
	void getdata(){
		cout<<"Enter the Length of the Rectangle"<<endl;
		cin>>length;
		cout<<"Enter the Breadth of the Rectangle"<<endl;
		cin>>breadth;
	}
	//modifying the function defined in the base class.
	void getarea(){
		area=length*breadth;
		cout<<"The Area of the Rectangle is "<<area<<endl;
	}
};
int main() {
	int ch;

		do {
			//pointer of the type base class
			Shape *shapePointer;
			int ch1;
			cout<<"*****Area of different shapes*****\n1.Square\n2.Rectangle\n3.Ellipse\n4.Circle"<<endl;
			cin>>ch1;
			switch (ch1) {
				case 1:
					//shapePointer holding the address of the the object of class Square.
					shapePointer = new Square;
					//invokes the function of the class Square.
					shapePointer->getdata();
					shapePointer->getarea();
					break;
				case 2:
					//shapePointer holding the address of the the object of class Rectangle.
					shapePointer = new Rectangle;
					//invokes the function of the class Rectangle.
					shapePointer->getdata();
					shapePointer->getarea();
					break;
				case 3:
					//shapePointer holding the address of the the object of class Ellipse.
					shapePointer = new Ellipse;
					//invokes the function of the class Ellipse.
					shapePointer->getdata();
					shapePointer->getarea();
					break;
				case 4:
					//shapePointer holding the address of the the object of class Circle.
					shapePointer = new Circle;
					//invokes the function of the class Circle.
					shapePointer->getdata();
					shapePointer->getarea();
					break;
				default:
					break;
			}
			cout<<"Do you want to continue?\n1.Continue\n2.Quit"<<endl;
			cin>>ch;
		} while (ch==1);
	
	
	return 0;
}