#include<iostream>
#include<vector>
using namespace std;

bool find(int row,int col,vector<vector<int>> arr, int key){

    int low=0;
    int high=col-1;

        while(low<=high){

            int mid=low+(high-low)/2;
            int element=arr[row][mid];
            
                if(element==key){
                    cout<<"Founded ni the array"<<mid;
                    return true;
                    break;
                }else if(element<key){
                    low=mid+1;
                }else if(element>key){
                    high=mid-1;
                }
                return false;
            }


}
void searhing(vector<vector<int>> arr, int key){

    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<n;i++){
        if(find(i,m,arr,key)){
            cout<<"ELement finded"<<endl;
        }else{
            cout<<"ELement Not founded"<<endl;
        } 
    }

}


int BinarySearch(vector<vector<int>> arr, int key, int n){
        int k=arr[0].size();
        int low=0;
        int high=n*k-1;

        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/k;
            int cols=mid%n;

            int element=arr[row][cols];


            if(element==key){
                cout<<"Founded ni the array"<<mid;
                return mid;
            }else if(element<key){
                low=mid+1;
            }else if(element>key){
                high=mid-1;
            }
        }
        return -1;
}

int main(){
    vector<vector<int>> arr={{1,3,5},
                 {7,9,11},
                 {13,15,17}
                };

                int key=123;
                int rows=arr.size();
                // cout<<BinarySearch(arr,key,n);
                
                searhing(arr,key);

}

