// Erasing a Range of Elements
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50, 60};

    cout << "Original set: ";
    for (int x : s) cout << x << " ";

    // erase elements from 20 (inclusive) to 50 (exclusive)
    auto it1 = s.find(20);
    auto it2 = s.find(50);
    s.erase(it1, it2);

    cout << "\nAfter erasing 20 to 40: ";
    for (int x : s) cout << x << " ";

    return 0;
}
