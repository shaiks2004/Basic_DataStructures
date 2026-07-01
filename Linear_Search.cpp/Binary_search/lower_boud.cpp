
//Find the first position where the value is greater than or equal to the target.
//first element that is ≥ target?" → Lower Bound.
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1,2,4,4,4,7,9};

    int n = arr.size();
    int target = 10;

    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    int lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    int ub = upper_bound(arr.begin(), arr.end(), target) - arr.begin();

    cout << "My Lower Bound : " << ans << endl;
    cout << "STL Lower Bound: " << lb << endl;
    cout << "STL Upper Bound: " << ub << endl;
}