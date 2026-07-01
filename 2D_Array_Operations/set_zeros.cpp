#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        // Your logic starts here

    }
};

int main() {
    Solution obj;

    vector<vector<int>> matrix = {
        {0, 1, 1},
        {1, 1, 1},
        {0, 1, 0}
    };

    obj.setZeroes(matrix);

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}