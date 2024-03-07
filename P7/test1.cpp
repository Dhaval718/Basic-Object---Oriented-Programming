/*Write a program using static member function to increment value of variable 3
times.*/

#include <iostream>
using namespace std;

class static_member
{
private:
    static int n;

public:
    void setdata(int num)
    {

        n = num;
    }
    static void add_3()
    {
        n *= 3;
        cout << "Number is " << n;
    }
};

int static_member::n = 0;

int main()
{
    static_member obj;

    obj.setdata(5);
    obj.add_3();

    return 0;
}