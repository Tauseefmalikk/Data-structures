#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lcs3(vector<int>& a, vector<int>& b, vector<int>& c) {
    int m = a.size();
    int n = b.size();
    int o = c.size();

    vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n + 1, vector<int>(o + 1, 0)));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= o; ++k) {
                if (a[i - 1] == b[j - 1] && a[i - 1] == c[k - 1]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                } else {
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                }
            }
        }
    }

    return dp[m][n][o];
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 4, 1, 5};
    vector<int> c = {1, 2, 4, 5};

    cout << "Length of the longest common subsequence: " << lcs3(a, b, c) << endl; // Output: 3

    return 0;
}
