/*Create a class 'COMPLEX' to hold a complex
number. Write a friend function to add two
complex numbers. Write a main function to
add two COMPLEX objects. */

#include <iostream>
using namespace std;

class Complex
{
private:
    int r = 0, i = 0;

public:
    void get_data(int _r, int _i)
    {
        r = _r;
        i = _i;
    }
    void put_data()
    {
        cout << r << " + " << i << "i" << endl;
    }

    friend void add_complex_number(Complex, Complex);
};

void add_complex_number(Complex c1, Complex c2)
{
    cout << c1.r + c2.r << " + " << c1.i + c2.r << "i" << endl;
}

int main()
{
    Complex c1, c2;
    int r1, r2, i1, i2;

    cout << "Enter the first real number : ";
    cin >> r1;
    cout << "Enter the first imaginary number : ";
    cin >> i1;

    cout << "Enter the second real number : ";
    cin >> r2;
    cout << "Enter the second imaginary number : ";
    cin >> i2;

    c1.get_data(r1,i1);
    c2.get_data(r2,i2);

    c1.put_data();
    c2.put_data();

    cout << "The the addition is:" << endl;
    add_complex_number(c1,c2);

    return 0;
}