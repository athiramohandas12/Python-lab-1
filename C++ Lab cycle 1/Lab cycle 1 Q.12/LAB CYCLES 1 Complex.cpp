#include<iostream>

using namespace std;
class complex

{
    int x, y;

public:
  void getvalue()
	{
	    cout << "Enter real and imaginary part:";
        cin >> x >> y;
	}
	friend complex sum(complex, complex);
    void show();
};
void complex::show()
{
     cout << " Sum of complex num is" << x<< "+i" << y;
}
complex sum(complex a, complex b)
{
	complex c;
	c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}
int main()
{
	complex a, b, c;
	a.getvalue();
	b.getvalue();
	c = sum(a, b);
	c.show();
	return(0);

}