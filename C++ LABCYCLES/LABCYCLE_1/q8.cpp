#include <iostream>
using namespace std;

class complex {
	float x, y;
public:
	complex() {}
	complex(float a) { x = y = a; }
	complex(float real, float imag)
	{
		x = real;y = imag;
	}
	friend complex sum(complex, complex);
	friend void show(complex);
};
complex sum(complex c1, complex c2) {
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return(c3);
}
void show(complex c) {
	cout << c.x << "+"<<c.y << "i" << endl;
}
int main()
{
int  a,b,c,d;

	cout << "Enter real part of 1st complex number:";
	cin >> a;
	cout << "Enter imaginary part of 1st complex number:";
	cin >> b;
	cout << "Enter real part of 2nd complex number:";
	cin >> c;
	cout << "Enter imaginary part of 2nd complex number:";
	cin >> d;


	complex A(a,b);
	complex B(c,d);
	complex C;
	C = sum(A, B);
	cout<<"============RESULTS=============\n";
	cout << "First complex number        :";
	show(A);
	cout << "Second complex number :     :";
	show(B);
	cout << "Sum of two complex number   = ";
	show(C);
	return 0;


}
