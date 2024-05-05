#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isTPrime(long long n) {
    if (n <= 3) return false; // 1 and 2 are not T-prime
    long long root = sqrt(n);
    return root * root == n && isPrime(root);
}

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; ++i) {
        if (isTPrime(numbers[i])) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
