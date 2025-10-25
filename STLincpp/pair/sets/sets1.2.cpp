// Searching and checking presence

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    int key = 20;

    // find() returns iterator to the element or s.end() if not found
    if (s.find(key) != s.end())
        cout << key << " found in set.\n";
    else
        cout << key << " not found.\n";

    // count() returns 1 if present, 0 if not
    cout << "Is 50 present? " << (s.count(50) ? "Yes" : "No") << endl;
}
