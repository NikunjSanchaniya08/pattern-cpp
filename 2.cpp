#include <iostream>
using namespace std;

// output
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *

int main()
{
    int n = 5;
    int r, c, s;
    for (r = 1; r <= n; r++) // row
    {
        for (s = n; s >= r; s--) // space
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++) // coulmn
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}