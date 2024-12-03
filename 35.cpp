#include <iostream>
using namespace std;

//  1 1 1 1 1 
//   0 0 0 0 
//    1 1 1 
//     0 0 
//      1 
//     0 0 
//    1 1 1 
//   0 0 0 0 
//  1 1 1 1 1 

int main()
{ // upper
    int r, c, num = 5, s;
    for (r = num; r >= 1; r--)
    {
        for (s = r; s <= num; s++)
        {
            cout << " ";
        }
        for (c = r; c >= 1; c--)
        {
            cout << r%2 << " ";
        }
        cout << endl;
    }
    // lower
    int r1, c1, s1;
    for (r1 = 2; r1 <= num; r1++)
    {
        for (s1 = num; s1 >= r1; s1--)
        {
            cout << " ";
        }
        for (c1 = 1; c1 <= r1; c1++)
        {
            cout << r1%2 << " ";
        }
        cout << endl;
    }
    return 0;
}