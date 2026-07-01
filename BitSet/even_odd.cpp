#include<iostream>
using namespace std;

int main(){


    int a=13;

        // 8 4 2 1           // 8 4 2 1 
        // 1 0 1 0           // 1 1 0 1  = 13
        // 0 0 0 1           // 0 0 0 1  = 1
       // -----------           --------  
        // 1 0 1 1   ==11       1 1 0 0    12
    if((a & 1) ==0  ){
        cout<<"Even number";
    }else{
        cout<<"ODD number";
    }
}