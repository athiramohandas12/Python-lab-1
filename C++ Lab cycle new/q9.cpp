#include<iostream>
using namespace std;
class object
{
int code;
static int count;
public:
void setcode(void)
{
code = ++count;
}
void showcode(void)
{
cout << "object number:" << code << "\n";
}
static void showcount(void)
{
cout << "count:"<<count << "\n";
}
};  
int object :: count;
int main()
{ int n;      
 
        cout<<"Enter number of objects:";
        cin>>n;
object o[n];
      for(int i=0;i<n;i++)
{o[i].setcode();
        }
object::showcount();
for(int i=0;i<n;i++)
{

o[i].showcode();
}
return 0;



}
