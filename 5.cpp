#include <iostream>
using namespace std;

//-*****
//--****
//---***
//----**
//-----*

int main()
{
    int n = 5, s, r, c;
    for (r = 1; r <= n; r++) // row
    {
        for (s = 1; s <= r; s++) // space
        {
            cout << " ";
        }
        for (c = n; c >= r; c--) // column
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
