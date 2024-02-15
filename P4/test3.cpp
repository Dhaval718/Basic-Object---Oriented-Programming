/*Write a C++ program to find area of circle using
formula pi*r 2 . take the value of pi as default
argument in function.*/

#include <iostream>
using namespace std;

float Area_circle(float radius, float pi = 3.14)
{
    return radius * radius * pi;
}

int main()
{
    float r;

    cout << "Enter the radius : ";
    cin >> r;
    cout << "Area of circle is " << Area_circle(r);

    return 0;
}