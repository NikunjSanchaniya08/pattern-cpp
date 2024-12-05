#include <iostream>
using namespace std;

// 1 0 1 0 1 
// 1 0 1 0 
// 1 0 1 
// 1 0 
// 1 

int main()
{
    int r, c, num = 5;
    for (r = num; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c %2<< " ";
        }
        cout << endl;
    }

    return 0;
}
