#include<iostream>
#include<string>
using namespace std;

bool vowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {return true;
    }
    return false;
}
int main(){
    string x="IceCreAm";
    
    int i=0;
    string rev=x;
    int j=rev.length()-1;
    while(i<=j){
       if(!vowel(rev[i])){
            i++;
        }
        else if(!vowel(rev[j])){
            j--;
        }
        else{
            swap(rev[i], rev[j]);
            i++;
            j--;
        }
    
    }
    cout<<x<<" "<<rev<<endl;
    

}