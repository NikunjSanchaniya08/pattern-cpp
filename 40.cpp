#include <iostream>
using namespace std;

// 1        1
// 12      12
// 123    123
// 1234  1234
// 1234512345
// 1234  1234
// 123    123
// 12      12
// 1        1

int main()
{ // Top
    int r, c, s, num = 5;
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c;
        }
        for (s = 1; s <= 2 * (num - r); s++)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << c;
        }
        cout << endl;
    }
    // bottom
    for (r = num - 1; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c;
        }
        for (s = 1; s <= 2 * (num - r); s++)
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
