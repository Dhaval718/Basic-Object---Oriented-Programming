/*Write a c++ program to declare structure of college_info like college_name, 
college_code, dept,intake, initialize and display contents of member variables. */
#include<iostream>
using namespace std;

struct college_info
{
    string collage_name;
    int college_code;
    string dept;
};


int main()
{
    struct college_info college_1;

    cout << "Write the name of collage: ";
    cin >> college_1.collage_name;
    cout << "Enter the collage code: ";
    cin >> college_1.college_code;
    cout << "Write the name of department: ";
    cin >> college_1.dept;

    cout << "Name of collage is " << college_1.collage_name << endl;
    cout << "Code of collage is " << college_1.college_code << endl;
    cout << "Name of department is " << college_1.dept << endl;
    
    
    return 0;
}