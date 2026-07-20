#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findNormalizedPrefixMatches(vector<string>& N, string& S) {
        // -------------------------------------------------------------------------
        // TODO: Write your logic here
        // 
        // Remember: 
        // 1. Normalize strings (lowercase, alphanumeric only).
        // 2. N is already sorted, so matches will be contiguous.
        // 3. Return {count, firstIndex, lastIndex}.
        // -------------------------------------------------------------------------    
        int count=0;
        vector<string> arr;
        int start=-1,end=-1;
        for(int i=0;i<N.size();i++){
            string str=N[i];
            string x="";
            for(int j=0;j<str.length();j++){
                char ch=str[j];
                
                if(isupper(ch)){
                    ch=tolower(ch);
                }
                if(isalnum(ch)){
                x+=ch;
                }
            
            }
            arr.push_back(x);
            
            if(x.length()>=S.length() && x.substr(0,S.length())==S){
                count++;

                if(start==-1){
                    start=i;
                }
                end=i;
            }
        }
        cout<<endl;


        if(count==0){return {0,-1,-1};}
        return {count, start, end}; // Default return statement
    }
};

int main() {
    Solution solver;

    // Example Test Case
    vector<string> N = {
        "API Design Guide", 
        "api-design: basics", 
        "Apple Pie", 
        "App-le: pie!!", 
        "application security", 
        "banana"
    };
    string S = "app";

    // Execute the function
    vector<int> result = solver.findNormalizedPrefixMatches(N, S);

    // Print the output
    cout << "Output: [" << result[0] << ", " << result[1] << ", " << result[2] << "]\n";
    cout << "Expected: [3, 2, 4]\n";

    return 0;
}