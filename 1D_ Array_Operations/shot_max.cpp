    #include<iostream>
    using namespace std;

    int main(){

        int arr[]={9,3,8,8,4};
        int shot=8;
        int size=sizeof(arr)/sizeof(arr[0]);
        int count=0;

        for(int i=0;i<size;i++){
            if(arr[i]>shot){
                count++;
            }
        }
        cout<<count;
        


    }