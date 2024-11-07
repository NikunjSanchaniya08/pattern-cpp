#include <iostream>

using namespace std;

// * * * * *
//  * * * *
//   * * *
//    * *
//     *

int main()
{
    int n = 5, r, c, s;
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

    return 0;
}