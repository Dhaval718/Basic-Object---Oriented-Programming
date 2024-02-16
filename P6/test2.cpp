/*Write a C++ program using array of objects to compare SPI of 10 different students
and print whose SPI is highest. */

#include <iostream>
using namespace std;

class Student
{
private:
    float SPI;

public:
    void setdata(float n)
    {
        SPI = n;
    }
    float get_spi()
    {
        return SPI;
    }
};

int main()
{
    Student s[10];
    float max;

    for (int i = 0; i < 10; i++)
    {
        float n;
        cout << "Enter the SPI for student " << i + 1 << ": ";
        cin >> n;
        s[i].setdata(n);
    }

    max = s[0].get_spi();

    for (int i = 1; i < 10; i++) 
    {
        if (max < s[i].get_spi()) 
        {
            max = s[i].get_spi();
        }
    }
    cout << "The max SPI is " << max;

    return 0;
}
