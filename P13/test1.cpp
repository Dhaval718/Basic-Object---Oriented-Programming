/*Write a Program to read a text file and count number of characters in it. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin;

    string line;
    int count = 0;
    
    fin.open("text.txt");

    while (getline(fin, line))
    {
        count += line.length();
    }

    cout << "Number of characters in the file: " << count << endl;

    fin.close();

    return 0;
}