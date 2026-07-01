#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(int num){
    int temp=num;
    int reverse=0;
    while(temp!=0){

        int digit=temp%10;
        reverse=reverse*10+digit;
        temp/=10;
    }
    return (num==reverse)? true : false;
}
int main(){

    int num=121;
bool is_there=checkpalindrome(num);
    if(is_there) cout<<"is a palindrome";

    else cout<<"not a palindrome";

}
