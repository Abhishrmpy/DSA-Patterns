// Custom Sorting (Descending Order

#include <iostream>
#include <set>
using namespace std;

int main() {
    // greater<int> makes set sort in descending order
    set<int, greater<int>> s;

    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(3);

    cout << "Set in descending order: ";
    for (int x : s)
        cout << x << " ";

    return 0;
}
