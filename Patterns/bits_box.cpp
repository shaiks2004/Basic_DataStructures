#include<iostream>
using namespace std;

int main(){
    int n=5;
    int x=0;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            if(x==0){
                cout<<" 1 ";
                x=1;
            
            }else{
                cout<<" 0 ";
                x=0;
            
            }
        }
        cout<<endl;
    }
}