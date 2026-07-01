#include<iostream>
using namespace std;

int main(){

    int arr[]={-1,2,3,4,5,-1};
    int size=sizeof(arr)/sizeof(arr[0]);
   

    int i=0,j=0;
    int n=size;
    
    for(int i=0;i<size;i++){
        
        for(int j=i;j<size;j++){

            for(int k=i;k<=j;k++){

                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    

}
