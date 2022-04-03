#include <iostream>
using namespace std;

class Time {
	int hours;
	int minutes;
	int seconds;
public:
	void getTime() {
		cout << "Enter hours:";
		cin >> hours;
		cout << "Enter mintutes:";
		cin >> minutes;
		cout << "Enter seconds:";
		cin >> seconds;
	}
	void putTime(void) {
		cout << hours << "  Hours and ";
		cout << minutes << "  minutes ";
		cout<<seconds<<"seconds" << endl;
	}
	void sum(Time, Time);
};
void Time::sum(Time t1, Time t2) //t1,t2 are objects
{
	seconds = t1.seconds + t2.seconds;
	minutes = seconds / 60;
	seconds = seconds % 60;
	minutes = t1.minutes + t2.minutes;
	hours = minutes / 60;
	minutes = minutes % 60;
	hours = hours + t1.hours + t2.hours;
}
int main()
{
	Time T1, T2, T3;

	T1.getTime();
	T2.getTime();
	T3.sum(T1, T2);
	cout << " Time T1 = ";
	T1.putTime();
	cout << " Time T2 = ";
	T2.putTime();
	cout << " Sum of T1 and T2 = ";
	T3.putTime();

	return 0;
};
