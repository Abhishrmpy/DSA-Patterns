// Using set with custom order

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int, greater<int>> s; // descending order

    s.insert(10);
    s.insert(5);
    s.insert(20);

    cout << "Elements in descending order: ";
    for (int x : s)
        cout << x << " ";  // prints 20 10 5
}
