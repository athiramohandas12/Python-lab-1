#include <iostream>
using namespace std;

class Vector{
	float i_component,j_component,k_component;
public:
	void operator*(const Vector&);
	friend ostream & operator<<(ostream&,Vector&);
	friend istream & operator>>(istream&,Vector&);
};
istream & operator>>(istream&din,Vector&a){
	cout<<"Enter i component "<<endl;
	cin>>a.i_component;
	cout<<"Enter j component "<<endl;
	cin>>a.j_component;
	cout<<"Enter k component "<<endl;
	cin>>a.k_component;
	return (din);
}
ostream & operator<<(ostream&dout,Vector&a){
	if (a.j_component>0 and a.k_component>0) {
		dout<<a.i_component<<"i + "<<a.j_component<<"j + "<<a.k_component<<"k"<<endl;
	}
	else {
		if(a.j_component<0 and a.k_component<0){
			dout<<a.i_component<<"i "<<a.j_component<<"j "<<a.k_component<<"k"<<endl;
		}
		else if(a.j_component<0){
			dout<<a.i_component<<"i "<<a.j_component<<"j + "<<a.k_component<<"k"<<endl;
		}
		else {
			dout<<a.i_component<<"i + "<<a.j_component<<"j "<<a.k_component<<"k"<<endl;
		}
	}
	return dout;
}
void Vector::operator*(const Vector&a){
	Vector crossProduct;
	float dotProduct;
	crossProduct.i_component = (j_component*a.k_component)-(k_component*a.j_component);
	crossProduct.j_component = (i_component*a.k_component)-(k_component*a.i_component);
	crossProduct.k_component = (i_component*a.j_component)-(j_component*a.i_component);
	cout<<"Cross Product of these vectors : "<<crossProduct;
	
	dotProduct = (i_component*a.i_component)+(j_component*a.j_component)+(k_component*a.k_component);
	cout<<"Dot Product of these vectors: "<<dotProduct<<endl;
}

int main() {
	int ch1;
	cout<<"***Cross Product and Dot product of Vectors***"<<endl;
	
			cout<<"First Vector"<<endl;
			Vector vector1;
			cin>>vector1;
			cout<<"Second Vector"<<endl;
			Vector vector2;
			cin>>vector2;
			cout<<"First Vector : "<<vector1;
			cout<<"Second Vector  : "<<vector2;
			int ch;
			cout<<"1.*Cross Product of first and second vector \n  *Dot Product of first and second vector \n2.Exit"<<endl;
			
			cin>>ch;
			if(ch==1){
				vector1*vector2;
				cout<<"Do you want to continue ?\n1.Continue\n2.Exit"<<endl;
				cin>>ch;
			
		    while (ch==1);
			}
		   else{
	       return 0;
             }
			}