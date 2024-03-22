/*i. Create a class called distance that has a separate integer member data for feet and
inches. One constructor should initialize this data to zero and another should initialize
it to fixed values. A member function should display it in feet inches format. */
#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inche;

public:
    Distance()
    {
        feet = 0;
        inche = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inche = i;
    }

    void Display()
    {
        cout << "The distance is " << feet << ":" << inche << endl;
    }
};

int main()
{
    int i, f;

    cout << "Enter the feet ";
    cin >> f;
    cout << "Enter the inche ";
    cin >> i;
    // scanf("%d.%d", &f, &i);
    Distance d1(f, i);

    d1.Display();

    return 0;
}