#include <iostream>
using namespace std;

// * * * *
//  * * *
//   * *
//    *
//   * *
//  * * *
// * * * *

int main()
{
    // top
    int n = 4, r, c, s;
    for (r = 1; r <= n; r++)
    {
        for (s = 1; s <= r; s++)
        {
            cout << " ";
        }
        for (c = n; c >= r; c--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // bottom
    int r2, c2, s2;
    for (r2 = 2; r2 <= n; r2++)
    {
        for (s2 = n; s2 >= r2; s2--)
        {
            cout << " ";
        }
        for (c2 = 1; c2 <= r2; c2++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}