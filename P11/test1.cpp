/* Write a program for simple/single inheritance. */
#include <iostream>
using namespace std;

class Base
{
private:
    int data_1;

public:
    void setdata(int x)
    {
        data_1 = x;
    }
    void showdata()
    {
        cout << data_1 << endl;
    }
};

class Drived : public Base
{
private:
    int data_2;

public:
    void setdata(int x, int y)
    {
        Base::setdata(y);
        data_2 = x;
    }

    void showdata()
    {
        Base::showdata();
        cout << data_2 << endl;
    }
};

int main()
{
    Drived d;

    d.setdata(50, 70);
    d.showdata();

    return 0;
}