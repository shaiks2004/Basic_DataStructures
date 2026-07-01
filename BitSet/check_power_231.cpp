#include<iostream>
using namespace std;

int main(){


    int n=16;

    // 16 8 4 2 1
    //  1 0 0 0 0   -> n
    //  0 1 1 1 1   -> n-1
    // -----------   & operator
    //  0 0 0 0 0    -> zero
    if((n & (n - 1))==0){
        cout<<"Poweer of two";
    }else{
        cout<<"Not power of two";
    }
}

/*
    edge cases
         if zero 
         negative numenr
         if one
        large integers
        non integers
*/