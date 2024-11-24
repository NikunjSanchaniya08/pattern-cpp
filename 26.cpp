#include <iostream>
using namespace std;

//      1
//     12
//    123
//   1234
//  12345
//   1234
//    123
//     12
//      1

int main()
{
    int r, c, s, num = 5;
    for (r = 1; r <= num; r++)
    {
        for (s = num; s >= r; s--)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << c;
        }
        cout << endl;
    }
    for (r = 1; r <= num - 1; r++)
    {
        for (s = 1; s <= r + 1; s++)
        {
            cout << " ";
        }
        for (c = 1; c <= num - r; c++)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}