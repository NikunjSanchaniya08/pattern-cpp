#include <iostream>
using namespace std;

// output
//  *
//  **
//  ***
//  ****
//  *****

int main()
{
    int r, c;
    int n = 5;
    for (r = 1; r <= n; r++) // row
    {
        for (c = 1; c <= r; c++) // column
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}