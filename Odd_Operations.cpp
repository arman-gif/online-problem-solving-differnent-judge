#include <bits/stdc++.h>
using namespace std;

bool hasOddDigit(long long n) {
    if (n < 0) n = -n;
    string s = to_string(n);
    for (char c : s) {
        int d = c - '0';
        if (d % 2 == 1) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 1) {
            cout << 0 << "\n";
            continue;
        }

        if (hasOddDigit(n)) {
            cout << 1 << "\n";
            continue;
        }

        // check if subtracting any digit gives a number with an odd digit
        bool found2 = false;
        string s = to_string(n);
        for (char c : s) {
            int d = c - '0';
            long long candidate = n - d;
            if (candidate >= 0 && hasOddDigit(candidate)) {
                found2 = true;
                break;
            }
        }

        if (found2) {
            cout << 2 << "\n";
        } else if (n >= 10) {
            cout << 3 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}