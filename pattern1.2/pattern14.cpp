/*
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/

#include <iostream>
using namespace std;
int main() {
    int i, j;
    for(int i=0; i<=5; i++){
        for(int j=1; j<=5; j++){
            char name = 'a' + j-1;
            cout << name << " ";  // Added space and removed endl
        }
        cout << endl;  // Only one endl after each row is complete
    }
    return 0;
}
