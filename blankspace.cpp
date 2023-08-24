#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream file1read("a.txt");
    ofstream file2write("b.txt");
    char ch[100];
    // string st;
    // getline(file1read, st);
    while (file1read.eof() == 0)
    {
        file1read >> ch;
        file2write << ch;
        file2write << " ";
        // cout << ch;
        // cout << " ";
    }

    return 0;
}