#include <iostream>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main()
{
    int n = 5, r, c, nub = 1;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << nub << " ";
            nub++;
        }
        cout << endl;
    }

    return 0;
}