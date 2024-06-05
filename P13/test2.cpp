/*Write a Program to read a text file and copy it to another text file. */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;

    string line;

    fin.open("text.txt");
    fout.open("copy.txt");

    while (!fin.eof())
    {
        getline(fin, line);
        fout << line << endl;
    }

    cout << "File copy done" << endl;

    return 0;
}