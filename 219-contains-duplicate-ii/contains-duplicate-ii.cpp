class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> sc;
        int n = nums.size();
        for(int i=0; i<n ; i++)
        {
            if(sc.count(nums[i]))
            {
                if(abs(i-sc[nums[i]]) <=k)
                {
                    return true;
                }
                
            }
            sc[nums[i]]=i;
        }
        
        return false ;
    }
};