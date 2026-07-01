#include<iostream>
using namespace std;

void printBinary(int n){
    for(int i=7;i>=0;i--){
        cout << ((n >> i) & 1);
    }
}
int main(){

    int n=10;
    
    int i=0;
    int gray;
    while(i<n){
        gray=i^(i>>1);
        cout<<i<<" -> "; 
        printBinary(i);
        cout<<" -> "<<gray<<" -> ";
        printBinary(gray);
        cout<<endl;
        i++;
    }

    // Gray To Binary
    cout<<endl;

    int b=gray;
    while(gray>0){
    gray= gray>>1;
    b=b^gray;
    cout << gray<< " -> ";
    printBinary(b);
    cout << endl;
    }

}