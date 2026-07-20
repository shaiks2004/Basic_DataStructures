#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sub(int i, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans)
    {
        if (i >= nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        sub(i + 1, nums, temp, ans);
        temp.pop_back();
        sub(i + 1, nums, temp, ans);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> temp;
        vector<vector<int>> ans;
        sub(0, nums, temp, ans);
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = obj.subsets(arr);
    for (vector<int> x : ans)
    {
        for (int i : x)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}