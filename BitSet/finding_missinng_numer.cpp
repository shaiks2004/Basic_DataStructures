#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){


vector<int> arr = {5, 3, 1, 0, 2};
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int ans=n;
    for(int i=0;i<arr.size();i++){
        ans=ans^i;
        ans=ans^arr[i];
    }
    cout<<ans;
}