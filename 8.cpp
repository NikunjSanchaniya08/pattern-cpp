#include <iostream>
using namespace std;

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

int main()
{
    // top
    int n = 8, r, c, s;

    for (r = 1; r <= n; r++)
    {
        for (s = n; s >= r; s--)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // bottom
    int r2, c2, s2;

    for (r2 = 1; r2 <= n; r2++)
    {
        for (s2 = 0; s2 <= r2; s2++)
        {
            cout << " ";
        }
        for (c2 = n - 1; c2 >= r2; c2--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}