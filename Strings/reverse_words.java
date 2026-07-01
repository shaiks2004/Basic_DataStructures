// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main(){
//     string words="Happy Birthday";
//     int i=0;
//     int j=words.length()-1;

//     reverse(words.begin(),words.end());
//     cout<<words;
// }

import java.util.*;

class reverse_words {
    public static void main(String[] a){

        String str="Happy BirthDay";
        String[] arr = str.trim().split("\\s+");
            int i=0,j=arr.length-1;

            while(i<j){
                String word=arr[i];
                arr[i]=arr[j];
                arr[j]=word;
                i++;
                j--;
            }

        System.out.print(String.join(" ",arr));
    }
}