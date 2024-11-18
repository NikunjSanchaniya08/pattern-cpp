#include <iostream>
using namespace std;

// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

int main()
{
    int r, c, num = 5;
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        for (c = 1; c <= r - 1; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}