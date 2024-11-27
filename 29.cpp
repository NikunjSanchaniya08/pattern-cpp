#include <iostream>
using namespace std;

//  12345
//   1234
//    123
//     12
//      1
//     12
//    123
//   1234
//  12345
int main()
{
    int r, c, s, num = 5;
    for (r = num; r >= 1; r--)
    {
        for (s = r; s <= num; s++)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << c;
        }
        cout << endl;
    }
    for (r = 2; r <= num; r++)
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
    return 0;
}