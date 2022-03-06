#include <iostream>
using namespace std;

class complex {
	int real, image;
public:
	void getvalue();
	complex friend sum(complex, complex);
	void show();

};

void complex::getvalue() {
	cout << "Enter Real number ";
	cin >> real;
	cout << "Enter Imaginary part ";
	cin >> image;
}

void complex::show() {
	
		cout << real << "+" << image << "i" << endl;
	
}


complex sum(complex c1, complex c2) {
	complex result;
	result.real = c1.real + c2.real;
	result.image = c1.image + c2.image;
	return result;
}

int main() {
	complex a, b, c;
	a.getvalue();
	a.show();
	b.getvalue();
	b.show();
	c = sum(a, b);
	c.show();
	return 0;
}