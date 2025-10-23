// Pair inside vector
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<pair<int, string>> students;

    students.push_back({1, "Abhi"});
    students.push_back({2, "Neha"});
    students.push_back(make_pair(3, "Raj"));

    for(auto &s : students){
        cout << s.first << " -> " << s.second << endl;
    }
}
