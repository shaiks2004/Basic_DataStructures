// 1,2,3,4,5
//k=2

//4,5,1,2,3


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rev(int *arr, int low,int high){

    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int r=2;
    
    if(r>size) return 0;
    rev(arr,0,size-1);
    rev(arr,0,r-1);
    rev(arr,r,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 
    cout<<endl;


}