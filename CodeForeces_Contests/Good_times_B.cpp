#include <bits/stdc++.h>
using namespace std;

bool good(long long n) {
    set<int> s;
    while (n) {
        s.insert(n % 10);
        n /= 10;
    }
    return s.size() <= 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        for (int len = 1; len <= 10; len++) {
            long long y = 0;
            for (int i = 0; i < len; i++) {
                y = y * 10 + 1;  
            }

            if (good(y) && good(x * y)) {
                cout << y << "\n";
                break;
            }
        }
    }

    return 0;
}