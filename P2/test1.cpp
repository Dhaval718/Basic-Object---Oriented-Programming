#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;

    cout << "Sum = " << a + b << endl;
    cout << "Sub = " << a - b << endl;
    cout << "mul = " << a * b << endl;
    cout << "div = " << a / b << endl;
    cout << "mod = " << a % b << endl;

    return 0;
}