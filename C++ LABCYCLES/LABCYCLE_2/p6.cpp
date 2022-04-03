#include <iostream>
#include <iomanip>
using namespace std;
class Student {
protected:
	char name[15];
	int rollNo;
public:
	void getRollNo() {
		cout << "Enter your Name" << endl;
		cin >> name;
		cout << "Enter your Roll no : ";
		cin >> rollNo;
	}
	void display_rollNo() {
		cout << "Name" << setw(16) << ":" << setw(2) << name << endl;
		cout << "Roll No" << setw(13) << ":" << rollNo << endl;
	}
};


class Test :public virtual Student {
protected:
	float mark1, mark2;
public:
	void getMarks() {
		cout << "Enter the mark for subject 1 : ";
		cin >> mark1;
		cout << "Enter the mark for subject 2 : ";
		cin >> mark2;
	}
	void displayMarks() {
		cout << "Mark for Subject 1 :" << mark1 << endl;
		cout << "Mark for Subject 2 :" << mark2 << endl;
	}
};

class Sports :public virtual Student {
protected:
	int sportsScore;
public:
	void getScore() {
		cout << "Enter the Score for Sports : ";
		cin >> sportsScore;
	}
	void displayScore() {
		cout << "Score for Sports" << setw(4) << ":" << setw(2) << sportsScore << endl;
	}
};
class Result :public Test, public Sports {
	float total;
public:
	void totalResult() {
		total = mark1 + mark2 + sportsScore;
	}
	void displayResult() {
		cout << endl;
		display_rollNo();
		displayMarks();
		displayScore();
		totalResult();
		cout << "Total Marks" << setw(10) << ":" << total << endl;
	}
};

int main() {
	int ch;
	{
		do {
			Result A;
			A.getRollNo();
			A.getMarks();
			A.getScore();
			A.displayResult();
			cout << "1.Continue\n2.Exit" << endl;
			cin >> ch;
		} while (ch == 1);
	}
	return 0;
}