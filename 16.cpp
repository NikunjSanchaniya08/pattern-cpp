#include <iostream>
using namespace std;

//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

int main()
{
    int r, c, num = 5, s;
    for (r = 1; r <= num; r++)
    {
        for (s = num; s >= r; s--)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << r << " ";
        }
        cout << endl;
    }

    return 0;
}