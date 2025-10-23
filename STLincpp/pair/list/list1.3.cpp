// Sorting, Reversing, and Removing Duplicates

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> data = {5, 1, 3, 3, 2, 5, 4};

    data.sort();        // sort the list
    data.unique();      // remove consecutive duplicates
    data.reverse();     // reverse the list order

    cout << "List after operations: ";
    for (int n : data) cout << n << " ";
}
