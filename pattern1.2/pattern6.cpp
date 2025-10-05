/*
    *
   ***
  *****
 *******


*/
#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of rows
    for (int i = 1; i <= n; i++) {

        // print spaces first
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // then print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl; // move to next line
    }
    return 0;
}
