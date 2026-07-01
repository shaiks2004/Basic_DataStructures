#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=16;
    for (int i = 1; i * i <= n; i++) {
        if(n%i==0){
            //we know that to get a divisor we divide it by the remainder
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i;
            }
        }
    }
}