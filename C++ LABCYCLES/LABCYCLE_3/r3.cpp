#include <iostream>
#include <cmath>
using namespace std;

double computeArea(float a, float b, float c) {
	//if the triangle inequality theorem is not satisfied it throws an error.
	if ((a + b) <= c or (b + c) <= a or (a + c) <= b) {
		//throws the error message and function will be terminated.
		throw "These dimensions does not satisfy a triangle";
	}
	//else the area will be computed.
	else {
		double s, area;
		s = (a + b + c) / 2;
		area = s * (s - a) * (s - b) * (s - c);
		if (area < 0) {
			area = area * -1;
		}
		area = sqrt(area);
		return area;
	}
}

int main() {
	int ch;

	{
		float side1, side2, side3;
		do {
			cout << "Enter the sides of a triangle" << endl;
			cin >> side1 >> side2 >> side3;
			try {
				double area;
				area = computeArea(side1, side2, side3);
				cout << "Area is " << area << endl;
				cout << "Do you want to continue?\n1.Continue\n2.Quit" << endl;
				cin >> ch;
			}
			catch (const char* message) {
				cout << message << endl;
				cout << "Do you want to continue?\n1.Continue\n2.Quit" << endl;
				cin >> ch;
			}
		} while (ch == 1);
	}

	return 0;
}