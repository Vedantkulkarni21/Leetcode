class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,mini=INT_MAX,sum=0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum >= target)
            {
                mini = min(mini,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return mini == INT_MAX ? 0 : mini;
    }
};