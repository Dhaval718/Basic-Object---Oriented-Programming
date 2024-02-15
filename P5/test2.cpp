/*Given that an EMPLOYEE class contains following members: Employee number,
Employee name, Basic, DA, IT, Net Salary and print data members using Object. */

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int employeeNumber;
    string employeeName;
    float basic;
    float DA;
    float IT;
    float netSalary;

public:
    void getdata(int empNumber, string empName, float basicSalary, float da, float incomeTax)
    {
        employeeNumber = empNumber;
        employeeName = empName;
        basic = basicSalary;
        DA = da;
        IT = incomeTax;

        calculateNetSalary();
    }
    void calculateNetSalary()
    {
        netSalary = basic + DA - IT;
    }
    void printDetails()
    {
        cout << "Employee Number: " << employeeNumber << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "Dearness Allowance: " << DA << endl;
        cout << "Income Tax: " << IT << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main()
{
    Employee emp;
    emp.getdata(101, "Manthan", 500000, 20000, 10000);
    emp.printDetails();

    return 0;
}
