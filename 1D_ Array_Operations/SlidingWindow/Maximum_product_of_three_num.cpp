#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={1,2,5,9,10,200,400};
    int n=sizeof(arr)/sizeof(arr[0]);
   
    int i=0;
    int j=0;

    int k=3;
    int maxi=INT_MIN;

    for(int i=0;i<=size-k;i++){
        int product=1;
        for(int j=i;j<i+k;j++){
            product*=arr[j];
        }
            maxi=max(maxi,product);

    }
    cout<<max(arr[n-1]*arr[n-2]*arr[n-3], arr[0]*arr[1]*arr[n-1]);
    // cout<<maxi;

}