#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char* str;
    int length;
public:
    String()
    {
        length = 0;
        str = new char[length + 1];
    }
    String(const char* s)
    {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    void get_string()
    {
        cin >> str;
    }
    void display()
    {
        cout << str << endl;
    }
    void concat(String a, String b);
    void stlength();
    void compare(String s1, String s2);
};
void String::concat(String a, String b)
{
    length = a.length + b.length;
    delete str;
    str = new char[length + 1];
    strcpy(str, a.str);
    strcat(str, b.str);
    cout << endl;
}
void String::stlength()
{
    cout << strlen(str);
    cout << endl;
}
void String::compare(String s1, String s2)
{
    int m, n;
    m = strlen(s1.str);
    n = strlen(s2.str);
    if (m < n)
        cout << s1.str << " is smaller than " << s2.str << "\n";
    if (m = n)
        cout << s1.str << " is equal to " << s2.str << "\n";
    else
        cout << s2.str << " is smaller than " << s2.str << "\n";
}
int main()
{
    int ch;
    string rp;
    String Str1, Str2, Str3;
    {
        while (true)
        {
            cout << "Operations on Strings:\n";
            cout << "1.String concatenation\n";
            cout << "2.Lengths of String \n";
            cout << "3.Comparison of strings\n";
            cout << "Enter choice:\n";
            cin >> ch;

            if (ch == 1)
            {
                cout << "1.String concatenation\n";
                cout << "Enter first string:\n";
                Str1.get_string();
                cout << "Enter second string:\n";
                Str2.get_string();
                cout << "First string is:";
                Str1.display();
                cout << "Second string is:";
                Str2.display();
                Str3.concat(Str1, Str2);
                cout << "After concatenation:\n";
                Str3.display();
                cout << endl;
            }
            else if (ch == 2)
            {
                cout << "2.String comparison\n";
                cout << "Enter first string:\n";
                Str1.get_string();
                cout << "Enter second string:\n";
                Str2.get_string();
                cout << "First string is:";
                Str1.display();
                cout << "Second string is:";
                Str2.display();
                cout << "\nLength of first string:";
                Str1.stlength();
                cout << "\nLength of second string:";
                Str2.stlength();
                cout << "\nLength of concatenated string:";
                Str3.stlength();
                cout << endl;
            }
            else if (ch == 3)

            {
                cout << "3.Comparison of strings\n";
                cout << "Enter first string:\n";
                Str1.get_string();
                cout << "Enter second string:\n";
                Str2.get_string();
                cout << "First string is:";
                Str1.display();
                cout << "Second string is:";
                Str2.display();
                Str3.compare(Str1, Str2);
            }

            cout << "Do you want to continue(y/n): ";
            cin >> rp;
            if (rp == "y")
                continue;
            else
                cout << "Exit";

            return false;
        }

    }
}