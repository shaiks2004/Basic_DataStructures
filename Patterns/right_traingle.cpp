#include<iostream>
using namespace std;

int main(){
    int n=4;
// 
    // char ch='A';
    for(int i=0;i<n;i++){
        char x='A';
        for(int j=0;j<i+1;j++){
            cout<<" "<<(char)x<<" ";
            x++;
        }
        cout<<endl;
    }
}