#include<iostream>
#include<math.h>
using namespace std;

int main(){


    int arr[]={523,643,813,53,152,644};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int maxi=0;
    int sum=0;
    float average;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        maxi=max(maxi,arr[i]);
    }
    average=sum/size;
    cout<<"Sum of the numbers: "<<sum<<endl;
    cout<<"MAximum of the numbers: "<<maxi<<endl;
    cout<<"Average of the numbers: "<<average<<endl;
    

}