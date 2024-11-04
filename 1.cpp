#include <iostream>
using namespace std;

//     *
//    **
//   ***
//  ****
// *****

int main()
{
    int n = 5;
    int r, s, c;
    for (r = 1; r <= n; r++)    //row
    {
        for (s = n; s >= r; s--) //space
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)    //column
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
