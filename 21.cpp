#include <iostream>
using namespace std;

// 4444444
//  33333
//   222
//    1
//   222
//  33333
// 4444444

int main()
{ // upper
    int r, c, num = 5, s;
    for (r = num; r >= 1; r--)
    {
        for (s = r; s <= num; s++)
        {
            cout << " ";
        }
        for (c = r; c >= 1; c--)
        {
            cout << r << " ";
        }
        cout << endl;
    }
    // lower
    int r1, c1, s1;
    for (r1 = 2; r1 <= num; r1++)
    {
        for (s1 = num; s1 >= r1; s1--)
        {
            cout << " ";
        }
        for (c1 = 1; c1 <= r1; c1++)
        {
            cout << r1 << " ";
        }
        cout << endl;
    }
    return 0;
}