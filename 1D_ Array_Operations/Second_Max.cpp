    #include<iostream>
    using namespace std;

    int main(){

        int arr[]={523,643,813,53,152,644};
        int size=sizeof(arr)/sizeof(arr[0]);
        
    int first_max=0;
    int second_max=0;

    for(int i=0;i<size;i++){
        if(first_max<arr[i]){
            first_max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(second_max<=first_max-1 && second_max<arr[i]){
            second_max=arr[i];
        }
    }
    cout<<first_max<<" "<<second_max<<endl;
}