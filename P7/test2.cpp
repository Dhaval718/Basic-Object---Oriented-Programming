/*Write a program to show the use of static data member and static member
function.*/

#include <iostream>
using namespace std;

class Static_class
{
    static int num;

public:
    static void creat()
    {
        num++;
    }
    void print()
    {
        cout << "The number of objects is " << num;
    }
};

int Static_class::num = 0;

int main()
{
    Static_class o1, o2, o3, o4;

    o1.creat();
    o2.creat();
    o3.creat();
    o4.creat();

    o1.print();

    return 0;
}