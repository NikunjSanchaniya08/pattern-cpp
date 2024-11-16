#include <iostream>
using namespace std;

//     1
//    121
//   12321
//  1234321
// 123454321
//  1234321
//   12321
//    121
//     1

int main()
{ // upper
    int r, c, s, num = 5;

    for (r = 1; r <= 5; r++)
    {
        for (s = num; s >= r; s--)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << c;
        }
        for (c = r - 1; c >= 1; c--)
        {
            cout << c;
        }
        cout << endl;
    }

    // lower

    int r2, c2;
    for (r2 = num - 1; r2 >= 1; r2--)
    {
        for (int s2 = 0; s2 <= num - r2; s2++)
        {
            cout << " ";
        }
        for (c2 = 1; c2 <= r2; c2++)
        {
            cout << c2;
        }
        for (c2 = r2 - 1; c2 >= 1; c2--)
        {
            cout << c2;
        }
        cout << endl;
    }

    return 0;
}