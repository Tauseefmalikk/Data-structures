#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxPoints(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    int prev = -2, prevMax = 0, prevPrevMax = 0;
    for (auto& [num, count] : freq) {
        int currentMax = max(prevMax, prevPrevMax + count * num);
        prevPrevMax = prevMax;
        prevMax = currentMax;
        prev = num;
    }

    return prevMax;
}

int main() {
    vector<int> nums = {3, 4, 2, 2, 3, 3, 4};
    cout << "Maximum points: " << maxPoints(nums) << endl; // Output: 9

    return 0;
}
