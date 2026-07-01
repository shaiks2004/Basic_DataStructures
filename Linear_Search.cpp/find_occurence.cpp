#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={23,7,9,23,1,10};

    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int> indexes;
    int target=23;int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            indexes.push_back(i);
            count++;
        }
    }
    for(int x:indexes){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<count;
}