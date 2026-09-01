class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        dfs(0, nums, temp, ans);

        return ans;
        
    }

    void dfs(int i, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans)
    {
        if(i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        dfs(i + 1, nums, temp, ans);

        temp.pop_back();
        dfs(i + 1, nums, temp, ans);
    }

};