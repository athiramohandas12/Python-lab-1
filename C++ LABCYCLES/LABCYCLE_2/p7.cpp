#include <iostream>
using namespace std;
class alpha{
protected:
	int numA;
public:
	//default constructor of alpha.
	alpha(){
		cout<<"Default Constructor of  Class Alpha"<<endl;
	}
	//parameterized constructor of alpha.
	alpha(int a){
		numA = a;
		cout<<"Alpha initialized"<<endl;
	}
	//function to display the value of alpha.
	void displayA(){
		cout<<"Alpha : "<<numA<<endl;
	}

};

class beta{
protected:
	int numB;
public:
	//default constructor of beta.
	beta(){
		cout<<"Default Constructor of Class Beta"<<endl;
	}
	//parameterized constructor of beta.
	beta(int y){
		numB = y;
		cout<<"Beta initialized"<<endl;
	}
	//function to display the value of beta.
	void displayB(){
		cout<<"Beta : "<<numB<<endl;
	}
};

//derived class gamma from alpha and beta
class gamma:public alpha,public beta{
	int numG;
public:
	//default constructor of gamma.
	gamma(){
		cout<<"Default Constructor of Class Gamma"<<endl;
	}
	//parameterized constructor of gamma which passes arguments to base class.
	gamma(int x,int y,int z):alpha(x),beta(y){
		numG = z;
		cout<<"Gamma initialized"<<endl;
	}
	//function to display the value of gamma.
	void displayG(){
		cout<<"Gamma : "<<numG<<endl;
	}
};

int main() {
	int choice,Alpha,Beta,Gamma,ch;
	
	do {
		cout<<"1. Object for Gamma without any arguments\n2.Create Object for Gamma with arguments\n3.Quit"<<endl;
		cin>>choice;
		if(choice == 1){
			//object for gamma which invokes the default constructor.
			gamma obj1;
			cout<<endl;
		}
		else if (choice==2){
			cout<<" Alpha : ";
			cin>>Alpha;
			cout<<"Beta : ";
			cin>>Beta;
			cout<<"Gamma : ";
			cin>>Gamma;
			cout<<endl;
			//object for gamma which invokes the parameterized constructor.
			gamma obj2(Alpha,Beta,Gamma);
			cout<<endl;
			obj2.displayA();
			obj2.displayB();
			obj2.displayG();
			cout<<endl;
		
		}
		cout<<"Do you want to continue?\n1.Continue\n2.Quit"<<endl;
		cin>>ch;
	} while (ch==1);
		return 0;
}