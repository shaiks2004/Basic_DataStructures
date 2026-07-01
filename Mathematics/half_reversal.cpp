#include<bits/stdc++.h>
using namespace std;

bool is_half_reversal(string num,int n){
      int low=0;
    int high=0;
    if(n % 2 == 0)
        high = n / 2;
    else
        high = n / 2 + 1;
 
   
    string half1="";
    while(low<high){
        half1+=num[low++];
    }

    string half2="";
    while(high<n){
        half2+=num[high++];
    }
   
    cout<<"First Half:"<<half1<<endl;
    cout<<"Secon Half:"<<half2<<endl;
    reverse(half2.begin(), half2.end());
    cout<<"reversed  :" <<half2<<endl;
    if(half1==half2) return true;
    return false;
}

int main(){

    string num="120021";
    int n=num.length();

    bool is_there=is_half_reversal(num,n);
    if(is_there) cout<<"is  palindrome";

    else cout<<"not  palindrome";


    /*
    --Optimized code
    bool is_palindrome(int num){

        if(num<=0 && num%10==0 ) return false;
        int reversedHalf=0;
        while(num> reversedHalf){
        reversedHalf=reversedHalf*10+num%10;
        num/=10;
        }
        return (num== reversedHalf || num==reversedHalf/10);
    }

    
    
    */

}
