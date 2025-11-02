// Unordered Set (Fast Access, No Sorting)
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s = {50, 10, 40, 20, 10}; // duplicates ignored

    s.insert(30);

    cout << "Unordered set: ";
    for (int x : s)
        cout << x << " "; // order is random

    if (s.find(40) != s.end())
        cout << "\n40 Found";
    else
        cout << "\n40 Not Found";

    return 0;
}
