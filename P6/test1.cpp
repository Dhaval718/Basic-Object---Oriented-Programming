/*Create a class called 'EMPLOYEE' that has - EMPCODE and EMPNAME as data -
member function getdata( ) to input data - member function display( ) to output
data Write a main function to create EMP, an array of EMPLOYEE objects. Accept
and display the details of at least 6 employees */

#include <iostream>
using namespace std;

class EMPLOYEE
{
private:
    int EMPCODE;
    string EMPNAME;

public:
    void getdata()
    {
        cout << "Enter the Employee name : ";
        cin >> EMPNAME;
        cout << "Enter the Employee code : ";
        cin >> EMPCODE;
    }
    void display()
    {
        cout << "Employee code is " << EMPCODE << endl;
        cout << "Employee name is " << EMPNAME << endl;
    }
};

int main()
{
    EMPLOYEE emp[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter details of Employee no " << i+1 << endl;
        emp[i].getdata();
        cout << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "Employee no " << i+1 << endl;
        emp[i].display();
        cout << endl;
    }
    

    return 0;
}