#include<bits/stdc++.h>
using namespace std;


int main(){

    string s = "a??d";
    string t = "abcd";

    for(int i=0;i<s.length();i++){
        
        for(int j=i;j<s.length();j++){

            if(s[i]==t[j]){
                continue;
            }
            if(s[i]=='?' && s[0]!=t[j]){
                s[i]=t[j];
            }
        }
    }
    cout<<s<<endl;

}