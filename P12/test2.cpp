/* Define a class vehicle. Inherit vehicle into two-wheelers and four-wheelers. */
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int no_of_wheels;
    string color;

public:
    Vehicle(int n = 0) : no_of_wheels(n) {}
    
    void setcolor()
    {
        cout << "Enter the color of Vehicle: ";
        cin >> color;
    }
    void putdata()
    {
        cout << "Number of wheels " << no_of_wheels << endl;
        cout << "Color of Vehicle " << color << endl;
    }
};

class Two_wheelers : public Vehicle
{
public:
    Two_wheelers() : Vehicle(2) {}
};

class Four_wheelers : public Vehicle
{
public:
    Four_wheelers() : Vehicle(4) {}
};

int main()
{
    Two_wheelers tw;
    Four_wheelers fw;

    tw.setcolor();
    tw.putdata();

    fw.setcolor();
    fw.putdata();

    return 0;
}