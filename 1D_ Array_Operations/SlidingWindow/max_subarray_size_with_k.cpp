#include<iostream>
using namespace std;

    int find_len_of_subarray(int arr[],int n,int k)
    {

     
        
        int i=0;
        int j=0;
        int maxi=INT8_MIN;
        int sum=0;
        while(j<n){
        sum=sum+arr[j];
        
        if(j-i+1<k){
            j++;
            cout<<arr[j]<<" ";

        }else if(j-i+1==k){
            
            maxi=max(maxi,sum);
            cout<<"maxi "<<maxi<<endl;
            sum=sum-arr[i];
            i++;
            j++;   
        }   
        cout<<endl;
        }
        return maxi;
            
    }

int main(){

    int arr[]={2,5,1,7,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<find_len_of_subarray(arr,size,k);

}