#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,6,7,8};
    int k=3;

    int size=sizeof(arr)/sizeof(arr[0]);
    int max_sum=INT8_MAX;
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<i+k && j<size;j++){
            sum+=arr[j];
            cout<<arr[j]<<" ";
            
        }
        max_sum=min(max_sum,sum);
        cout<<"    "<<sum;
        cout<<endl;
    }
    cout<<endl<<" "<<max_sum<<endl;
}