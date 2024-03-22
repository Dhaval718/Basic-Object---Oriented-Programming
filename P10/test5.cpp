/*Write a C++ program to print message when object gets destroyed using destructor. */
#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Object is Created " << endl;
    }
    ~Test()
    {
        // cout << "Byy Byy " << endl;
        cout << "Object is Destroyed " << endl;
    }
};

int main()
{
    Test t1,t2;

    return 0;
}