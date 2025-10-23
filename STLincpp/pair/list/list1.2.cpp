// Insert, Erase, and Iterator Movement

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {1, 2, 3, 4, 5};
    auto it = numbers.begin();
    advance(it, 2);  // move iterator to the 3rd element (0-based index)

    numbers.insert(it, 99);  // insert before the 3rd element
    numbers.erase(--it);     // erase element before current iterator position

    cout << "List after insert & erase: ";
    for (int x : numbers) cout << x << " ";
}
