/*Write a C++ Program to sort two numbers using call
by reference*/
#include <iostream>
using namespace std;

void sort(int &x, int &y)
{
    if (x < y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
}

int main()
{
    int a, b;

    cout << "Enter 1st value: ";
    cin >> a;
    cout << "Enter 2nd value: ";
    cin >> b;

    sort(a, b);

    cout << "After sort: \n1st = " << a << " , 2nd = " << b;

    return 0;
}