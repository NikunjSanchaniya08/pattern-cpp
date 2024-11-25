#include <iostream>
using namespace std;

//      1
//     222
//    33333
//   4444444
//  555555555

int main()
{
    int r, c, s, num = 5;
    for (r = 1; r <= num; r++)
    {
        for (s = num; s >= r; s--)
        {
            cout << " ";
        }
        for (c = 1; c <= 2 * r - 1; c++)
        {
            cout << r;
        }
        cout << endl;
    }

    return 0;
}