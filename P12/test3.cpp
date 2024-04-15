/*
Inherit two-wheelers into bicycle and scooters. Inherit four-wheelers into
diesel vehicles and petrol vehicles. Provide a virtual function that calculates the
mileage of the vehicles.
*/
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int no_of_wheels;

public:
    Vehicle(int n) : no_of_wheels(n) {}

    virtual void calculate_mileage() = 0;
};

class Two_wheelers : public Vehicle
{
public:
    Two_wheelers(int n) : Vehicle(n) {}

    void calculate_mileage()
    {
        int distance, fuel_consumed;
        cout << "Enter the distance traveled by the two-wheeler in km: ";
        cin >> distance;
        cout << "Enter the amount of fuel consumed by the two-wheeler in l: ";
        cin >> fuel_consumed;
        float mileage = distance / fuel_consumed;
        cout << "The mileage of the two-wheeler is: " << mileage << endl;
    }
};

class Four_wheelers : public Vehicle
{
public:
    Four_wheelers(int n) : Vehicle(n) {}

    void calculate_mileage()
    {
        int distance, fuel_consumed;
        cout << "Enter the distance traveled by the four-wheeler in km: ";
        cin >> distance;
        cout << "Enter the amount of fuel consumed by the four-wheeler in l: ";
        cin >> fuel_consumed;
        float mileage = distance / fuel_consumed;
        cout << "The mileage of the four-wheeler is: " << mileage << endl;
    }
};

class Bicycle : public Two_wheelers
{
public:
    Bicycle() : Two_wheelers(2)
    {
        cout << endl
             << "Bicycle Vehicle" << endl;
    }
};

class Scooter : public Two_wheelers
{
public:
    Scooter() : Two_wheelers(2)
    {
        cout << endl
             << "Scooter Vehicle" << endl;
    }
};

class Diesel_vehicle : public Four_wheelers
{
public:
    Diesel_vehicle() : Four_wheelers(4)
    {
        cout << endl
             << "Diesel Vehicle" << endl;
    }
};

class Petrol_vehicle : public Four_wheelers
{
public:
    Petrol_vehicle() : Four_wheelers(4)
    {
        cout << endl
             << "Petrol Vehicle" << endl;
    }
};

int main()
{
    Bicycle b;
    b.calculate_mileage();

    Scooter s;
    s.calculate_mileage();

    Diesel_vehicle dv;
    dv.calculate_mileage();

    Petrol_vehicle pv;
    pv.calculate_mileage();

    return 0;
}