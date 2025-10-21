
/*
1       1
 2     2 
  3   3  
   4 4   
    5    
   4 4   
  3   3  
 2     2 
1       1
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1)
                cout << i;
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1)
                cout << i;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
