#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    set<vector<int>> uniqueTriplets;

    sort(arr.begin(), arr.end()); // sort for two-pointer approach
    int n = arr.size();

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                uniqueTriplets.insert({arr[i], arr[left], arr[right]});
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "Unique triplets that sum to 0:\n";
    for (auto triplet : uniqueTriplets) {
        cout << "[ ";
        for (int x : triplet) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}
