#include <iostream>
using namespace std;

// 1
// 22
// 333
// 4444
// 55555

int main()
{
    int r, c, n = 5;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << r;
        }
        cout << endl;
    }
    return 0;
}