#include <iostream>
using namespace std;

// *****
// ****
// ***
// **
// *

int main()
{
    int n = 5, c, r;
    for (r = 1; r <= n; r++) // row
    {

        for (c = n; c >= r; c--) // column
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}