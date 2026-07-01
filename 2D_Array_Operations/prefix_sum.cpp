#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> nums = {{1, 2}, {3, 4}, {5, 6}};
      vector<vector<int>> prefix;
    
    int sum=0;
      for(int i=0;i<nums.size();i++){
        vector<int> temp;
        
        for(int j=0;j<nums[0].size();j++){
            sum+=nums[i][j];
            temp.push_back(sum);
        }
        prefix.push_back(temp);
      }

      for(int i=0;i<prefix.size();i++){
        for(int j=0;j<prefix[0].size();j++){
                cout<<prefix[i][j]<<" ";
        }
        cout<<endl;
      }
}