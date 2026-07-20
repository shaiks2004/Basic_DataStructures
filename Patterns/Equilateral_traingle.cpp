#include<bits/stdc++.h>
using namespace std;


int main(){


    int n=7;

    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            cout<<"* ";
        }
        for(int j=0;j<i;j++){
        cout<<"* ";
        }
        cout<<"1 2 3 4 5"<<endl;
        cout<<endl;
    }
}