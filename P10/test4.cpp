/* Write a C++ program to demonstrate use of constructor overloading.*/

/*Write a C++ program to demonstrate use of parameterized constructor. */

#include <iostream>
using namespace std;

class Vector
{
private:
    int i, j, k;

public:
    Vector()
    {
        i = 0;
        j = 0;
        k = 0;
    }
    Vector(int x)
    {
        i = x;
        j = 0;
        k = 0;
    }
    Vector(int x, int y)
    {
        i = x;
        j = y;
        k = 0;
    }
    Vector(int x, int y, int z)
    {
        i = x;
        j = y;
        k = z;
    }

    void print()
    {
        cout << "(" << i << "," << j << "," << k << ")" << endl;
    }
};

int main()
{
    Vector v1(4, 5, 6), v2(1, 2), v3(3), v4;

    v1.print();
    v2.print();
    v3.print();
    v4.print();

    return 0;
}