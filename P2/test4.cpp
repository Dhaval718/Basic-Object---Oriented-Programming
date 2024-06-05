// sum , avg , sorting in assending
#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int sum = 0, avg = 1;

    cout << "Enter the arr: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Sum of arr = " << sum << endl;
    avg = sum / 10;
    cout << "Avg of arr = " << avg << endl;

    int temp;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                // swap a[i] & a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
