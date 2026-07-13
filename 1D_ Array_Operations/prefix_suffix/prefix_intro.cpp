#include<iostream>
#include <vector>
using namespace std;

class answer{
    public:

        vector<int> prefixSum(vector<int> arr){
            int n=arr.size();    
             vector<int> prefix(n);
             prefix[0] = arr[0];


            for(int i=1;i<=arr.size();i++){
                prefix[i]=prefix[i-1]+arr[i];
            }
            
            return prefix;
            
        }

};


int main() {
    answer obj;

    vector<int> arr = {1, 2, 3, 4};
    vector<int> prefix =obj.prefixSum(arr);

    cout << "Prefix Sum Array: ";
    for (int x : prefix) cout << x << " ";
    return 0;
}

