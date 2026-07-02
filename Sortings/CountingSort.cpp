#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> countsort(vector<int> arr){
        int maxi=INT_MIN;
        for(auto it:arr){
            maxi=max(it,maxi);
        }
        int n=arr.size();
        vector<int> result(maxi + 1, 0);
        
        for(int i=0;i<n;i++){
            result[arr[i]]++;
        }
        for(int i=1;i<=result.size()-1;i++){
            result[i]=result[i]+result[i-1];
        }
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            ans[result[arr[i]]-1]=arr[i];
            result[arr[i]]--;
        }
        return ans;

}

int main(){

    vector<int> arr = {2,5,3,0,2,3,0,3};
    vector<int> ans = countsort(arr);

    for (int x : ans)
        cout << x << " ";

    return 0;
}