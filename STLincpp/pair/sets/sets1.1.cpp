// Basic set operations

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;  // creates an empty set

    // inserting elements
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3); // duplicate (ignored automatically)

    cout << "Set elements: ";
    for (int x : s)
        cout << x << " ";  // prints in sorted order: 1 3 5
    cout << endl;

    // erasing element
    s.erase(3);
    cout << "After erasing 3: ";
    for (int x : s)
        cout << x << " ";
}
