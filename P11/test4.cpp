/* Write a C++ program to demonstrate constructor call in the derived class. */
#include <iostream>
using namespace std;

class Base
{
protected:
    int data_1;

public:
    Base(int d)
    {
        cout << "Base constructor call" << endl;
        data_1 = d;
    }
};

class Drived : public Base
{
    int data_2;
public:
    Drived(int x,int y) : Base(y)
    {
        data_2 = x;
        cout << "Drived constructor call" << endl;
    }
    void showdata()
    {
        cout << "Data 1 is " << data_1 << endl;
        cout << "Data 2 is " << data_2 << endl;
    }
};

int main()
{
    Drived  obj(50, 7);
    obj.showdata();

    return 0;
}