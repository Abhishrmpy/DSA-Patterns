// Pair comparison
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1 = {1, "Abhi"};
    pair<int, string> p2 = {2, "Neha"};

    if (p1 < p2) {
        cout << p1.first << " is less than " << p2.first << endl;
    } else {
        cout << p1.first << " is not less than " << p2.first << endl;
    }

    return 0;
}
