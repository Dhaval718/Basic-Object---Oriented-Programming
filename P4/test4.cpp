/* Write a program to overload the max function.
(1) Find the max number from three numbers.
(2) Find the max string from three strings.*/

#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

string max(string a, string b, string c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;

    cout << "Enter the int value of a , b and c :";
    cin >> a >> b >> c;
    cout << "Max of a , b and c is " << max(a, b, c) << endl;

    string s1, s2, s3;

    cout << "Enter the string value of a , b and c :";
    cin >> s1 >> s2 >> s3;
    cout << "Max of a , b and c is " << max(s1, s2, s3) << endl;

    return 0;
}