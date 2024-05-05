#include <iostream>
#include <vector>

using namespace std;

int minJumps(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return 0; // Already at the end or no elements

    int maxReach = arr[0]; // Max index that can be reached
    int steps = arr[0]; // Steps left at current index
    int jumps = 1; // Number of jumps

    for (int i = 1; i < n; ++i) {
        if (i == n - 1) return jumps; // Reached the end

        maxReach = max(maxReach, i + arr[i]); // Update maxReach

        steps--; // Take a step

        if (steps == 0) { // Need to take a jump
            jumps++;

            if (i >= maxReach) return -1; // Cannot reach the end
            steps = maxReach - i; // Update steps
        }
    }

    return -1; // Cannot reach the end
}

int main() {
    vector<int> arr = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    cout << "Minimum number of jumps: " << minJumps(arr) << endl; // Output: 4

    return 0;
}
