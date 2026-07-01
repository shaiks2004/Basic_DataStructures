#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int x=9474;
    string str=to_string(x);   
    int n=str.length();
    int temp=x;
    int sum=0;
    while(temp!=0){
        int digit=temp%10;
        int power=pow(digit,n);
        sum=sum+power;
        temp/=10;
    }
    cout<<sum<<endl;
    if(x==sum) cout<<"Arm strong"<<endl;

    

}