// Prime or not prime
#include <iostream>
using namespace std;

int main()
{
    int num, c = 0;

    cout << "Enter the value: ";
    cin >> num;

    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }

    if (c > 0)
    {
        cout << "Number is not prime" << endl;
    }
    else
    {
        cout << "Number is Prime" << endl;
    }

    return 0;
}
