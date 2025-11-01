// Lower Bound & Upper Bound

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    auto it1 = s.lower_bound(25); // first element >= 25
    auto it2 = s.upper_bound(30); // first element > 30

    if (it1 != s.end())
        cout << "Lower bound of 25: " << *it1 << endl;
    else
        cout << "No lower bound found" << endl;

    if (it2 != s.end())
        cout << "Upper bound of 30: " << *it2 << endl;
    else
        cout << "No upper bound found" << endl;

    return 0;
}
