#include <iostream>
using namespace std;

class Complex{
	float real,image;
public:
	void getComplex();
	void displayComplex();
	friend Complex operator+(const Complex&,const Complex&);
	friend Complex operator*(const Complex&,const Complex&);
};

void Complex::getComplex(){
	cout<<"Enter the real part"<<endl;
	cin>>real;
	cout<<"Enter the imaginary part"<<endl;
	cin>>image;
}

void Complex::displayComplex(){
	if (image<0) {
		cout<<real<<" "<<image<<"i"<<endl;
	} else {
		cout<<real<<" + "<<image<<"i"<<endl;
	}
}

Complex operator+(const Complex &A,const Complex &B){
	Complex Sum;
	Sum.real = A.real+B.real;
	Sum.image = A.image+B.image;
	return Sum;
}

Complex operator*(const Complex &A,const Complex &B){
	Complex Product;
	Product.real = (A.real*B.real)-(A.image*B.image);
	Product.image = (A.image*B.real) + (A.real*B.image);
	return Product;
}
int main() {
	
	cout<<"***Addidion and Multiplication of Two Complex Numbers***"<<endl;
	
	
	int ch,ch1;
	Complex complex1,complex2,Sum,Product;
	cout<<" First Complex Number "<<endl;
	complex1.getComplex();
	cout<<"Second Complex Number 2"<<endl;
	complex2.getComplex();
	cout<<"First Complex Number 1  ";
	complex1.displayComplex();
	cout<<"Second Complex Number 2  ";
	complex2.displayComplex();
	do {
		cout<<"Choose the operation\n1.Complex Addition\n2.Complex Multiplication"<<endl;
		cin>>ch;
		switch (ch) {
			case 1:
				Sum = complex1+complex2;
				cout<<"Sum of complex numbers = ";
				Sum.displayComplex();
				break;
			case 2:
				Product = complex1*complex2;
				cout<<"Product of complex numbers = ";
				Product.displayComplex();
				break;
			default:
				break;
		}
		cout<<"Do you want to continue ? \n1.Continue\n2.Exit"<<endl;
		cin>>ch1;
	} while (ch1 == 1);
	if(ch1!=1){
		cout<<"Exited!"<<endl;
	}
	return 0;
}