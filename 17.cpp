#include <iostream>
using namespace std;

//      11
//     1221
//    123321
//   12344321
//  1234554321

int main()
{
    int r, c, s, num = 5;
    for (r = 1; r <= num; r++)
    {
        for (s = num; s >= r; s--) // space
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << c;
        }
        for (c = r; c >= 1; c--)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}