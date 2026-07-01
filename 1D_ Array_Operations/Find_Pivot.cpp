
#include<iostream>
using namespace std;

int find_pivot(int arr[],int size){

    // int i=0,j=size-1;
    // int counti=arr[i];
    // int countj=arr[j];
    // while(i<j){
    //     if(counti<countj){
    //         i++;
    //         counti+=arr[i];
    //     }else if(counti>countj){
    //         j--;
    //         countj+=arr[j];
    //     }else{
    //         i++;
    //         counti+=arr[i];
    //     }
    // }
    // if(counti==countj){
    //     return i+1;
    // }
    // return -1;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    int left_sum=0;
    for(int i=0;i<size;i++){
        int right_sum=sum-left_sum-arr[i];
        if(left_sum==right_sum){
            return i;
        }
        left_sum+=arr[i];
    }
    return -1;
}
int main(){


    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<find_pivot(arr,size);

}