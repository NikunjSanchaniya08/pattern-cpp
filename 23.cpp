#include <iostream>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

int main()
{ // Top
    int r, c, s, num = 5;
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        for (s = 1; s <= 2 * (num - r); s++)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (r = num - 1; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        for (s = 1; s <= 2 * (num - r); s++)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
