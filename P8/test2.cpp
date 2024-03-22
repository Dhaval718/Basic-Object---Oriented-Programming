/*Create a class Time that displays time in hour
and minute form. Create a method total Time()
which takes two Time objects as an argument
and returns a new object of Time displaying
total of both Time objects.*/

#include <iostream>
using namespace std;

class Time
{
private:
    int hour, minute;

public:
    void set_time(int h, int m)
    {
        hour = h;
        minute = m;
    }

    Time total_time(Time t1, Time t2)
    {
        Time total;

        total.hour = t1.hour + t2.hour;
        total.minute = t1.minute + t2.minute;

        if (total.minute >= 60)
        {
            total.hour += total.minute / 60;
            total.minute %= 60;
        }

        return total;
    }

    void put_time()
    {
        cout << hour << ":" << minute;
    }
};

int main()
{
    Time t1, t2;
    int h1, h2, m1, m2;

    cout << "Enter the Time 1 hour: ";
    cin >> h1;
    cout << "Enter the Time 1 minute: ";
    cin >> m1;
    cout << "Enter the Time 2 hour: ";
    cin >> h2;
    cout << "Enter the Time 2 minute: ";
    cin >> m2;

    t1.set_time(h1, m1);
    t2.set_time(h2, m2);

    Time total;

    total = total.total_time(t1, t2);

    cout << "The Total Time is ";
    total.put_time();

    return 0;
}