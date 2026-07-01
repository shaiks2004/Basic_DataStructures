#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){

    string a="abcabc";
    int n=a.length();
    for(int i=0;i<n;i++){
        string temp="";
        for(int j=i;j<n;j++){
            temp+=a[j];
            cout<<temp<<endl;
        }
        cout<<endl;
    }

}