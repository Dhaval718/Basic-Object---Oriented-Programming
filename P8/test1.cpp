/*
Create a 'DISTANCE' class with : - feet and
inches as data members
a. member function to input distance
b. member function to output distance
c. member function to add two distance
objects
d. Write a main function to create objects
of DISTANCE class. Input two distances
and output the sum.
*/

#include <iostream>
using namespace std;

class Distance
{
    int dir;

public:
    void input_data(int d)
    {
        dir = d;
    }
    void output_data()
    {
        cout << "The distance " << dir;
    }
    void add_distance(Distance d1, Distance d2)
    {
        cout << "The sum is " << d1.dir + d2.dir;
    }
};

int main()
{
    Distance obj1, obj2;
    int d1, d2;

    cout << "Enter the distance 1: ";
    cin >> d1;
    cout << "Enter the distance 2: ";
    cin >> d2;

    obj1.input_data(d1);
    obj2.input_data(d2);

    obj1.add_distance(obj1, obj2);

    return 0;
}