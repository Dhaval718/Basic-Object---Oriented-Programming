/*Write a C++ Program that shows use of this pointer. */

#include <iostream>
using namespace std;

class Demo
{
    int n;

public:
    Demo(int n)
    {
        this->n = n;
    }

    void showdata()
    {
        cout << "The number is " << n << endl;
    }
};

int main()
{
    Demo obj(50);
    obj.showdata();

    return 0;
}