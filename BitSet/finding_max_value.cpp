#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_value( vector<int> arr){
 
    int res=0;
    for(int i=31;i>=0;i--){
        int candidate=res | (1<<i);
        int count=0;
        for(int j=0;j<arr.size();j++){
            if((arr[j] & candidate)== candidate)
            {
                count+=1;
            }

        }
        if(count>=2) res=candidate;

    }
    return res;
}


int main(){
    vector<int> arr={4,8,11,12,16,32,64};
    cout<<max_value(arr);



    return 0;
}