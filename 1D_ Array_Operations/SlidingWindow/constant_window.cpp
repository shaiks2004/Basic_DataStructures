#include<iostream>
using namespace std;

int main(){

    int arr[]={-1,2,3,4,5,-1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int l=0,r=k;
    int maxsum=0;
    while(r<size){
        for(int i=l;i<r;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int sum=sum-arr[l];
        l++;
        r++;
        sum=sum+arr[r];
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum<<endl;



}