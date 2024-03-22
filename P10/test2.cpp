/*ii. Write a C++ program to copy the value of one object to another object using copy constructor. */
#include <iostream>
using namespace std;

class Name
{
    string s;

public:
    Name() {}
    Name(Name &n)
    {
        s = n.s;
    }
    void set_name(string n)
    {
        s = n;
    }
    void print_name()
    {
        cout << "Name : " << s << endl;
    }
};

int main()
{
    Name n1;

    n1.set_name("Naruto");
    n1.print_name();

    Name n2(n1);

    n2.print_name();  

    return 0;
}