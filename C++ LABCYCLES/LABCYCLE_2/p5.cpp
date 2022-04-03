#include <iostream>
#include <iomanip>
using namespace std;
class Students{
protected:
	int no_Students;
public:

	Students(int n){
		no_Students = n;
	}
	void display(){
		cout<<"Number of Students in CS Department"<<setw(14)<<":"<<setw(6)<<no_Students<<endl;
	}
};

class Teachers{
protected:
	int no_Teacher;
public:
	
	Teachers(int n){
		no_Teacher = n;
	}
	void display(){
		cout<<"Number of Teachers in CS Department"<<setw(14)<<":"<<setw(6)<<no_Teacher<<endl;
	}
};
class Department:public Students,public Teachers{
protected:
	int no_NonTeaching;
public:
	Department(int n1,int n2,int n3):Students(n1),Teachers(n2){
		no_NonTeaching=n3;
	}
	void display(){
		cout<<"Number of Non Teaching Staff in CS Department"<<setw(4)<<":"<<setw(6)<<no_NonTeaching<<endl;
	}
};
class University:public Department{
	int student_Registered;
public:
	University(int n1,int n2,int n3,int n4,int n5,int n6,int n7):Department(n1, n2, n3){
		student_Registered=n7;
	}
	void display(){
		Students::display();
		Teachers::display(); 
		Department::display();  
		cout<<"Number of Students Registered in the University : "<<setw(5)<<student_Registered<<endl;
	}
};


int main() {

	 {
		int deptStudents,deptTeachers,deptNonTeachers,colStudents,colTeachers,colNonTeachers,UniversityStudents;
		cout<<"Total number of Students in CS Department"<<endl;
		cin>>deptStudents;
		cout<<"Total number of Teachers in CS Department"<<endl;
		cin>>deptTeachers;
		cout<<"Total number of Non Teachers in CS Department"<<endl;
		cin>>deptNonTeachers;

		cout<<"Total number of Students Registered under the University"<<endl;
		cin>>UniversityStudents;
		University A(deptStudents,deptTeachers, deptNonTeachers, colStudents, colTeachers, colNonTeachers, UniversityStudents);
			A.display(); 
		}
	
	return 0;
}