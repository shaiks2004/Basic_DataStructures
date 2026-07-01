#include<iostream>
using namespace std;

int main(){

    //find ing the longest trainling zeros 
    // 128 64 32 16 8 4 2 1
    //   1  0  0  1 1 1 0 0 1



    int num=100111001;
    string str=to_string(num);
    int count=0;

    for(int i=1;i<str.length()-1;i++){
        if((str[i-1]=='1' &&  str[i]=='1') || (str[i+1]=='1' && str[i]=='1')){
                count++;
        }
    }
    // int temp=num;
    // while(temp!=0){
    //     int digit=temp%10;
    //     if((temp&1)==1) count++;
    //     temp/=10;
        
    // }
    cout<<count<<endl;

}