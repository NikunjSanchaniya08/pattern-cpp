#include <iostream>
using namespace std;

// A
// BC
// DEF
// GHIJ

int main()
{
    int r, c, n = 4;
    char ch = 'A';
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}