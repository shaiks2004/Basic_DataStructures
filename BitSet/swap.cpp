#include<iostream>
using namespace std;

int main(){
                // 16 8 4 2 1
    int a=10;  //   0 1 0 1 0
    int b=20; //    1 0 1 0 0
              //.-------------
    a=a^b;     //   1 1 1 1 0  = 30
  
    b=a^b;    //    0 1 0 1 0  = 10     

    a=a^b;     //   1 0 1 0 0 = 20 
    // int temp=a;
    // a=b;
    // b=temp;

    cout<<"A: "<<a<<" B: "<<b<<endl;  // A :20   B:10
}