/*Write a C++ program to enter number and cost of a class item using get data () and
using put data () to display data. Write get data () outside the class item. */

#include <iostream>
using namespace std;

class item
{
private:
    int n;

public:
    void get_data();
    void put_data();
};
void item::get_data()
{
    cout << "Enter a number: ";
    cin >> n;
}
void item::put_data()
{
    cout << "The number is " << n;
}

int main()
{
    item i;
    i.get_data();
    i.put_data();

    return 0;
}