/*Write a program to convert km to cm, meter, inch
and feet using manipulators endl, setw, setfill and
setprecision*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float km;

    cout << "Enter distance in kilometers: ";
    cin >> km;

    float cm = km * 100000;
    float m = cm / 100;
    float inches = cm / 2.54;
    float feet = cm / 30.48;

    cout << fixed << setprecision(2);
    cout << setw(15) << setfill('.') << "centimeters: " << cm << endl;
    cout << setw(15) << setfill('.') << "meters: " << m << endl;
    cout << setw(15) << setfill('.') << "inches: " << inches << endl;
    cout << setw(15) << setfill('.') << "feet: " << feet << endl;

    return 0;
}

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     float n;
//     int choice;

//     cout << "Press 1 for km to cm" << endl;
//     cout << "Press 2 for km to m" << endl;
//     cout << "Press 3 for km to inch" << endl;
//     cout << "Press 4 for km to feet" << endl;
//     cout << "Enter your choice : ";
//     cin >> choice;

//     cout << "Enter the km: " << endl;
//     cin >> n;

//     switch (choice)
//     {
//     case 1:
//         cout << "cm = " << setprecision(12) << n * 100000 << endl;
//         break;
//     case 2:
//         cout << "m = " << setprecision(12) << n * 1000 << endl;
//         break;
//     case 3:
//         cout << "inch = " << setprecision(12) << n * 39370.1 << endl;
//         break;
//     case 4:
//         cout << "cm = " << setprecision(12) << n * 3280.84 << endl;
//         break;

//     default:
//         break;
//     }

//     return 0;
// }