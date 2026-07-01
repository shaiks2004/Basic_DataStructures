#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char target;
    cin >> s >> target;

    int ans = -1;

    for (int i = 0; i < s.length(); i++) {
            if(s[i]==target){
                ans=i;
                break;
            }
    }

    cout << ans << endl;

    return 0;
}