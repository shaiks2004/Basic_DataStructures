#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int coins = 0;
        int removed = 0;

        for (int i = 0; i < n; i++) {

            long long limit = c;

            // After 'removed' doublings, the condition is:
            // a[i] * 2^removed <= c
            // Instead of multiplying a[i], divide c.
            for (int j = 0; j < removed; j++)
                limit /= 2;

            if (a[i] > limit)
                coins++;
            else
                removed++;
        }

        cout << coins << '\n';
    }
}