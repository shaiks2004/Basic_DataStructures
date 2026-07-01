#include<iostream>
using namespace std;

int main(){



    int n=2;
    int k=1;
    //
    // a bit is set if it is 1 else it is not set

    int mask= 1<<k;    // 8 4 2 1       8 4 2 1       
                      //  0 0 1 0       1 1 0 1
                     //   0 0 0 1       0 0 1 1
                    //  ----------      --------
                   //     0 0 1 1  ->3  0 0 0 1

    if((n & mask)!=0){    
        cout<<"Set" ;
    }else{
        cout<<"Non Set";
    }
}