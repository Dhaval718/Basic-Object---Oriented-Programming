/*   1
    2 3
   4 5 6
  7 8 9 10  */ 

#include <iostream>
using namespace std;

void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
}


int main()
{
    int num = 1;

    for (int i = 1; i <= 4; i++)
    {
        space(5 - i);
        for (int j = 1; j <= i; j++)
        {
            space(1);
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}
