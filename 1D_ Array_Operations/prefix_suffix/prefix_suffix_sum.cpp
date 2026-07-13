#include<iostream>
#include <vector>
using namespace std;

class answer{
    public:

        vector<int> suffixSum(vector<int> arr){
            int n=arr.size();    
             vector<int> suffix(n);
             suffix[n-1] = arr[n-1];


            for(int i=n-2;i>=0;i--){
                suffix[i]=suffix[i+1]+arr[i];
            }
            
            return suffix;
            
        }

         vector<int> PrefixSum( vector<int> arr){
            int n=arr.size();
             vector<int> Prefix(n);
             Prefix[0]=arr[0];

             for(int i=1;i<arr.size();i++){
                Prefix[i]=Prefix[i-1]+arr[i];
             }
         
             return Prefix;
            }

            vector<int> SuffPref(vector<int> suffix,vector<int> prefix){
                vector<int> result(suffix.size());

                for(int i=0;i<suffix.size();i++){
                    result[i]=suffix[i]+prefix[i];
                }
                return result;
            }

};


int main() {
    answer obj;

    vector<int> arr = {1, 2, 3, 4};
    vector<int> prefix =obj.PrefixSum(arr);
    vector<int> suffix =obj.suffixSum(arr);
    vector<int> suff_pref=obj.SuffPref(suffix,prefix);

    cout << "Prefix Sum Array: ";
    for (int x : arr) cout << x << " ";
    cout<<endl;
     cout << "Prefix Sum Array: ";
    for (int x : prefix) cout << x << " ";
    cout<<endl;
     cout << "suffix Sum Array: ";
    for (int x : suffix) cout << x << " ";
    cout<<endl;
    cout << "Prefix Sum Array: ";
    for (int x : suff_pref) cout << x << " ";
    return 0;
}

