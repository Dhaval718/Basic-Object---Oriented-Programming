// global var
#include<iostream>
using namespace std;

int v = 100;

int main()
{
    int v = 45;

    cout << "Global value of v = " << ::v << endl;
    cout << "Local value of v = " << v;
    
    return 0;
}