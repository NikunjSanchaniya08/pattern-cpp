#include <iostream>
using namespace std;

// 01010
// 10101
// 01010
// 10101
// 01010

int main()
{
    int r, c, num = 5, n = 1;
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= num; c++)
        {
            n++;
            cout << n % 2;
        }
        cout << endl;
    }

    return 0;
}