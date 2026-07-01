#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int target) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;
    
    if(arr[mid]==target){
        return mid;

    }
    else if(arr[mid]>target){
        binarySearch(arr,low,high-1,target);
    }else{
        binarySearch(arr,low+1,high,target);
    }
    
}

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> target;

    int ans = binarySearch(arr, 0, n - 1, target);

    cout << ans << endl;

    return 0;
}