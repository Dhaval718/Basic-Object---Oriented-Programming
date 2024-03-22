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
    Vector v1(4, 5, 6);

    v1.print();

    return 0;
}