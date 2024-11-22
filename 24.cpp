#include <iostream>
using namespace std;

// 5 4 3 2 1
//  4 3 2 1
//   3 2 1
//    2 1
//     1
//    2 1
//   3 2 1
//  4 3 2 1
// 5 4 3 2 1

int main()
{
    int r, c, s, num = 5;
    // upper
    for (r = num; r >= 1; r--)
    {
        for (s = r; s <= num; s++)
        {
            cout << " ";
        }
        for (c = r; c >= 1; c--)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    // lower
     for (r = 2; r <= num; r++)
    {
        for (s = r; s <= num; s++)
        {
            cout << " ";
        }
        for (c = r; c >= 1; c--)
        {
            cout << c<<" ";
        }
        cout << endl;
    }
    return 0;
}