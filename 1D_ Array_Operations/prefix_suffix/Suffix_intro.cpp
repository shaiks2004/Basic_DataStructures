#include<iostream>
using namespace std;

int main(){

    int arr[]={-1,2,3,4,5,-1};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            cout<<arr[j]<<" ";
        }
        cout<<" Sum: "<<sum<<endl;
    }

    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    for(int j=0;j<size;j++){
        sum-=arr[j];
        cout<<sum<<endl;
    }
}