class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=INT_MAX;
        int sum=0;
        int l=0;
        int n = nums.size();


        for(int h=0;h<n;h++)
        {
            sum=sum+nums[h];

            while(sum>=target)
            {
                sum= sum-nums[l];
                s=min(s,h-l+1);
                l++;
            }

        }

        if(s==INT_MAX)
        {
             s=0;
        }
        return s;
        
    }
};