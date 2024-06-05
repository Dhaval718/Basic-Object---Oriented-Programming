/*Write a program for multilevel inheritance. */
#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

class GermanShepherd : public Dog
{
public:
    void guard()
    {
        cout << "German Shepherd is guarding." << endl;
    }
};

int main()
{

    GermanShepherd gs;

    gs.eat();
    gs.bark();
    gs.guard();

    return 0;
}
