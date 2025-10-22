// Sorting using pairs
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int, string>> students = {
        {2, "Neha"},
        {1, "Abhi"},
        {3, "Raj"}
    };

    sort(students.begin(), students.end());

    for(const auto &s : students) {
        cout << s.first << " -> " << s.second << endl;
    }

    return 0;
}
