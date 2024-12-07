#include <iostream>
using namespace std;

// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1

int main()
{
    int n = 5, r, c, nub = 1;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << nub % 2 << " ";
            nub++;
        }
        cout << endl;
    }

    return 0;
}