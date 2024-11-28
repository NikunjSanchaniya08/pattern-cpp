#include <iostream>
using namespace std;

// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3         3 2 1 
// 1 2             2 1 
// 1                 1 

int main() {
    int r,c,s,num = 5; 

    for (r = 1; r <= num; r++) {
       
        for (c = 1; c <= num - r + 1; c++) {
            cout << c << " ";
        }

      
        for (s = 1; s <= 2 * (r - 1); s++) {
            cout << "  "; 
        }

        
        for (c = num - r + 1; c >= 1; c--) {
            cout << c << " ";
        }

        cout << endl; 
    }

    return 0;
}
