#include <iostream>
#include <utility>  // header file for pair
using namespace std;

int main() {
    pair<int, string> p1;     // a pair of int and string
    p1 = {1, "Abhi"};

    cout << p1.first << " " << p1.second;
    return 0;
}
