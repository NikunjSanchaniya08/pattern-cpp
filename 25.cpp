#include <iostream>
using namespace std;

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

int main()
{
    int r, c, num = 5;
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c<<" ";
        }
        cout << endl;
    }

    for (r = num-1; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c<<" ";
        }
        cout << endl;
    }

    return 0;
}