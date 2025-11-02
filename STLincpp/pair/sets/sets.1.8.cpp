// Set of Pairs (storing structured data)
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<pair<int, string>> students;

    students.insert({3, "Amit"});
    students.insert({1, "Riya"});
    students.insert({2, "Abhi"});

    cout << "Student roll & name (sorted by roll):\n";
    for (auto s : students)
        cout << s.first << " → " << s.second << endl;

    return 0;
}
