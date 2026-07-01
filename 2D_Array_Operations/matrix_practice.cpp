#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void practice(vector<vector<int>>& matrix) {
            
        int n=matrix.size();
        int m=matrix[0].size();
          for (int i = 0; i <n; i++) {
        for (int j = 0; j < m; j++) {
            for(int k=0;k<m;k++){

            
            if(matrix[i][j]==0 ){
                for(int k=0;k<m;k++){
                    matrix[i][k]=0;
                }
            }
            // cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
        

    }
};

int main() {
    Solution obj;

    vector<vector<int>> matrix = {
        {0, 1, 1},
        {1, 1, 1},
        {0, 1, 0}
    };

    obj.practice(matrix);

   
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}