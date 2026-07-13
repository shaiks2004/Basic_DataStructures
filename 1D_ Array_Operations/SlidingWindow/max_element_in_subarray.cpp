#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        
        int n=arr.size();
        vector<int> result;
        
        for(int i=0;i<=n-k;i++){
            int maxi=INT_MIN;
            for(int j=i;j<i+k;j++){
                maxi=max(maxi,arr[j]);
            }
            result.push_back(maxi);
        }
        return result;
    }
};