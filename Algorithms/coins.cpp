#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minCoins(int n) {
    vector<int> coins(n + 1, INT_MAX); // Initialize array with maximum value
    coins[0] = 0; // Base case: 0 coins needed to make change for 0

    vector<int> denominations = {1, 3, 4};

    for (int i = 1; i <= n; ++i) {
        for (int coin : denominations) {
            if (i >= coin && coins[i - coin] != INT_MAX) {
                coins[i] = min(coins[i], coins[i - coin] + 1);
            }
        }
    }

    return coins[n];
}

int main() {
    int n = 6;
    cout << "Minimum number of coins to make change for " << n << " cents: " << minCoins(n) << endl; // Output: 2

    return 0;
}
