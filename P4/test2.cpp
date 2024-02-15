/*Write a C++ program to multiply two numbers 
using inline function.*/
#include <iostream>
using namespace std;

inline int mul(int x, int y)
{
    return x*y;
}

int main()
{
    int a, b;

    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;

    cout << "a x b = " << mul(a, b);

    return 0;
}