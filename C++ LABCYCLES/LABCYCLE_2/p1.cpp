#include <iostream>
#include <cmath>
using namespace std;

class Vector{
	float i_component,j_component,k_component,magnitude;
public:
	void getVector();
	void displayVector();
	void Magnitude();
	void operator==(const Vector&);
	void operator!=(const Vector&);
	void operator<(const Vector&);
	void operator<=(const Vector&);
	void operator>(const Vector&);
	void operator>=(const Vector&);
};

void Vector::getVector(){
	cout<<"Enter i component"<<endl;
	cin>>i_component;
	cout<<"Enter j component"<<endl;
	cin>>j_component;
	cout<<"Enter k component"<<endl;
	cin>>k_component;
}
void Vector::displayVector(){
	if (j_component>=0 and k_component>=0) {
		cout<<i_component<<"i + "<<j_component<<"j + "<<k_component<<"k"<<endl;
	}
	else {
		if(j_component<0 and k_component<0){
			cout<<i_component<<"i "<<j_component<<"j "<<k_component<<"k"<<endl;
		}
		else if(j_component<0){
			cout<<i_component<<"i "<<j_component<<"j + "<<k_component<<"k"<<endl;
		}
		else {
			cout<<i_component<<"i + "<<j_component<<"j "<<k_component<<"k"<<endl;
		}
	}
}

void Vector::Magnitude(){
	magnitude = (i_component*i_component)+(j_component*j_component)+(k_component*k_component);
	magnitude = sqrtf(magnitude);
}
void Vector::operator==(const Vector &A){
	if (magnitude == A.magnitude){
		cout<<"They are equal vectors"<<endl;
	}
	else {
		cout<<"They are unequal vectors"<<endl;
	}
}
void Vector::operator!=(const Vector &A){
	if (magnitude != A.magnitude){
		cout<<"They are unequal vectors"<<endl;
	}
	else {
		cout<<"They are equal vectors"<<endl;
	}
}
void Vector::operator<(const Vector &A){
	if (magnitude < A.magnitude) {
		cout<<"Second Vector is greater than First Vector "<<endl;
	}
	else {
		cout<<"First Vector is greater than Second Vector "<<endl;
	}
}
void Vector::operator<=(const Vector &A){
	if (magnitude < A.magnitude) {
		cout<<"Second Vector is greater than First Vector "<<endl;
	}
	else if(magnitude == A.magnitude){
		cout<<"They are equal vectors"<<endl;
	}
	else {
		cout<<" First Vector is greater than Second Vector "<<endl;
	}
}
//member function to overload > operator for vector
void Vector::operator>(const Vector &A){
	if (magnitude > A.magnitude) {
		cout<<"First Vector is greater than Second Vector "<<endl;
	}
	else {
		cout<<"Second Vector is greater than First Vector"<<endl;
	}
}
void Vector::operator>=(const Vector &A){
	if (magnitude > A.magnitude) {
		cout<<"First Vector is greater than Second Vector"<<endl;
	}
	else if(magnitude == A.magnitude){
		cout<<"They are equal vectors"<<endl;
	}
	else {
		cout<<"Second Vector is greater than First Vector"<<endl;
	}
}

int main() {
	cout<<"************Comparisons Between Two Vectors************"<<endl;

	

	Vector V1,V2;
	int choice,choice2;
	cout<<"Vector 1"<<endl;
	V1.getVector();
	cout<<"\nVector 2"<<endl;
	V2.getVector();
	cout<<"Vector 1 = ";
	V1.displayVector();
	cout<<"Vector 2 = ";
	V2.displayVector();
	V1.Magnitude();
	V2.Magnitude();

	do {
		cout<<"\nChoose the operation to perform on the vector \n1.Vector1 == Vector2\n2.Vector1 != Vector2\n3.Vector1 <  Vector2\n4.Vector1 <= Vector2\n5.Vector1 >  Vector2\n6.Vector1 >= Vector2\n7.Quit"<<endl;
		cin>>choice;
		switch (choice) {
			case 1:
				V1== V2;
				break;
			case 2:
				V1!= V2;
				break;
			case 3:
				V1< V2;
				break;
			case 4:
				V1<= V2;
				break;
			case 5:
				V1> V2;
				break;
			case 6:
				V1>= V2;
				break;
			default:
				break;
		}
		cout<<"Do you want to Continue ?\n1.Continue\n2.exit"<<endl;
		cin>>choice2;
	} while (choice2 == 1);
	if(choice2!=1){
		cout<<"Exited!"<<endl;
	}
	return 0;
}