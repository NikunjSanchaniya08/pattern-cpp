#include <iostream>
using namespace std;

// E D C B A
//  D C B A
//   C B A
//    B A
//     A

int main()
{
    int r, c, s, num = 5;
    char ch;

    for (r = num; r >= 1; r--)
    {
        ch = 'A' + r - 1;

        for (s = num; s > r; s--)
        {
            cout << " ";
        }

        for (c = r; c >= 1; c--)
        {
            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }

    return 0;
}
