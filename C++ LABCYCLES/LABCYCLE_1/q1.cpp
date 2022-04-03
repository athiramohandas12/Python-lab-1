#include <iostream>
using namespace std;


class student
{
    int rollno, sub1, sub2, sub3, avg;
    string name, grade;

public:
    void data(void);
    string c_grade(void);
    void display(void);
};

void student::data(void)
{
    cout << "Enter Roll No:\n";
    cin >> rollno;
    cout << "Enter name of the student\n";
    cin >> name;
    cout << "Enter mark of first subject\n";
    cin >> sub1;
    cout << "Enter mark of second subject\n";
    cin >> sub2;
    cout << "Enter mark of third subject\n";
    cin >> sub3;
    avg = (sub1 + sub2 + sub3) / 3;
}

string student::c_grade(void)
{
    string c_grade;
    int avg = (sub1 + sub2 + sub3) / 3;
    cout << "Grade: ";
    if (avg >= 90 and avg <= 100)
        grade = "A+";
    else if (avg >= 80 and avg <= 89)
        grade = "A";
    else if (avg >= 70 and avg <= 79)
        grade = "B+";
    else if (avg >= 60 and avg <= 69)
        grade = "C+";
    else if (avg >= 50 and avg <= 59)
        grade = "C";
    else if (avg >= 40 and avg <= 49)
        grade = "D+";
    else if (avg >= 00 and avg <= 39)
        grade = "D";
    else
        cout << "Invalid marks";
    cout << grade << endl;
    return c_grade;
}
void student::display()
{
    cout << "*******Marklist Of " << name << "*******\n";
    cout << "Name               :" << name << endl;
    cout << "Roll no            :" << rollno << endl;
    cout << "Mark in subject 1  :" << sub1 << endl;
    cout << "Mark in subject 2  :" << sub2 << endl;
    cout << "Mark in subject 3  :" << sub3 << endl;
    cout << "Average of marks   :" << avg << endl;
}
int main()
{
    string choice;
    student s;
    while (true)
    {

        s.data();
        s.display();
        s.c_grade();

        cout << "Do you want to continue(y/n): ";
        cin >> choice;
        if (choice == "y")
            continue;
        else
            cout << "Exit";

        return false;
    }
}
