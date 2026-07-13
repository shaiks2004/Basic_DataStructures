#include<iostream>
using namespace std;

int main(){
    int n=4;
    int x=10;
    int y=10;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
    
            // if(i==j) cout<<" ";
            cout<<" "<<x<<" ";
            x--;
        }
        for(int k=i;k<n;k++){
    
            // if(i==j) cout<<" ";
            cout<<" "<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    }


