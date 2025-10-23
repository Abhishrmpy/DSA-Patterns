// Returning multiple values from a function
#include <iostream>
#include <utility>
using namespace std;

pair<int, int> getMinMax(int a, int b) {
    if(a < b) return {a, b};
    else return {b, a};
}

int main() {
    pair<int, int> result = getMinMax(8, 3);
    cout << "Min: " << result.first << ", Max: " << result.second;
}
