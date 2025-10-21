/*
    *    
   * *   
  *   *  
 *     * 
*       *
 *     * 
  *   *  
   * *   
    *    

*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // leading spaces
        for (int j = 1; j <= n - i; j++) cout << " ";

        // first star
        cout << "*";

        // middle spaces (only if i > 1)
        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // leading spaces
        for (int j = 1; j <= n - i; j++) cout << " ";

        // first star
        cout << "*";

        // middle spaces
        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
