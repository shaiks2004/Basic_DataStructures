#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> countsort(vector<int> arr){
        
    int k=INT_MIN;
    int n=arr.size();

    //finding the max
    for(auto it:arr){
        k=max(k,it);
    }
    //counting the frequency
    vector<int> cntarr(k+1,0);
    for(auto i:arr){
        cntarr[i]++;
    }
    //calculate prefix sum
    int sum=0;
   for(int i=1;i<cntarr.size();i++){
    cntarr[i]=cntarr[i]+cntarr[i-1];
   }

   vector<int> ans(n);

   for(int i=n-1;i>=0;i--){
    int idx=cntarr[arr[i]]-1;  //we are gathering the index and subtracting by 1
    ans[idx]=arr[i];           //storing the arr[i] to the positon
    cntarr[arr[i]]--;          // subtracting the cnt which is prefixed
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