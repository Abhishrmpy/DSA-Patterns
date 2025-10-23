// Basic Operations (push, pop, iterate)

#include <iostream>
#include <list>
using namespace std;

int main()
 {
    list<int> nums = {10, 20, 30};

    nums.push_front(5);   // insert at front
    nums.push_back(40);   // insert at end
    nums.pop_front();     // 

    cout << "List elements: ";
    for (int n : nums) cout << n << " ";   // iterating through list

    cout << endl;

    return 0;

 }