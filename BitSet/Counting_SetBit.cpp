#include<iostream>
using namespace std;

int naive_mehtod(int n){

    int n=8;                // 1 0 0 0 ->until this one comes to right the loop follow by right shift
    int count=0;            // 0 0 0 1
    while(n>0){             //---------
        if((n&1)==1){       // 0 0 0 0
            count++;
        }
    n=n>>1;
    }
    return count;
}
int brains_alog(int n){
//brgit ains keriginha method
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    //Naive method
        // 8 4 2 1
        // 1 0 0 0 ->until this one comes to right the loop follow by right shift
        // 0 0 0 1
        //---------
        // 0 0 0 0
    

   

}