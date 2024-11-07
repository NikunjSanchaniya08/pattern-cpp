#include <iostream>
using namespace std;

//  * * * * *
//   * * * * *
//    * * * * *
//     * * * * *
//      * * * * *

int main()
{
    int n = 5, r, c, s;
    for (r = 1; r <= n; r++) // row
    {
        for (s = 1; s <= r; s++) // space
        {
            cout << " ";
        }
        for (c = n; c >= 1; c--) // column
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}