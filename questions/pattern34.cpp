           
           /*
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1
 1   5  10  10   5   1
*/

#include <iostream>
using namespace std;

int fact(int n) {
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main() {
    int n = 6;
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i; s++) cout << "  ";
        for (int j = 0; j <= i; j++) {
            cout << fact(i) / (fact(j) * fact(i - j)) << "   ";
        }
        cout << endl;
    }
    return 0;
}
