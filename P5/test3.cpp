/* Write a program (using class and object) to convert distance in centimetre entered by
user into inches, feet, meter and kilometre*/

#include <iostream>
using namespace std;

class DistanceConverter
{
private:
    float cm;

public:
    void getdata(float n)
    {
        cm = n;
    }
    float toInches()
    {
        return cm / 2.54;
    }
    float toFeet()
    {
        return cm / (2.54 * 12);
    }
    float toMeters()
    {
        return cm / 100;
    }
    float toKilometers()
    {
        return cm / 100000;
    }
};

int main()
{
    float n;
    DistanceConverter o;

    cout << "Enter the value in cm: ";
    cin >> n;
    o.getdata(n);

    cout << "kilometers " << o.toKilometers() << endl;
    cout << "meters: " << o.toMeters() << endl;
    cout << "inches: " << o.toInches() << endl;
    cout << "feet: " << o.toFeet() << endl;

    return 0;
}
