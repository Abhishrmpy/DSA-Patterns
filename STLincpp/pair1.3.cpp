// Swapping pairs
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int> p1 = {10, 20};
    pair<int, int> p2 = {30, 40};

    cout << "Before swap: " << p1.first << "," << p1.second << endl;

    p1.swap(p2);

    cout << "After swap: " << p1.first << "," << p1.second << endl;

    return 0;
}
