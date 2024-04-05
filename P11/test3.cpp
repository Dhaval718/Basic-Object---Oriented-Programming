/*Write a program for multiple inheritances. */
#include <iostream>
using namespace std;

class A
{
protected:
    int data_1;

public:
    void setData(int x)
    {
        data_1 = x;
    }
    void show()
    {
        cout << "Data 1 is " << data_1 << endl;
    }
};

class B
{
protected:
    int data_2;

public:
    void setData(int x)
    {
        data_2 = x;
    }
    void show()
    {
        cout << "Data 2 is " << data_2 << endl;
    }
};

class C : public A, public B
{
public:
    void setData(int x, int y)
    {
        A::setData(x);
        B::setData(y);
    }
    void show()
    {
        A::show();
        B::show();
    }
};

int main()
{
    C obj;
    obj.setData(50, 75);
    obj.show();

    return 0;
}