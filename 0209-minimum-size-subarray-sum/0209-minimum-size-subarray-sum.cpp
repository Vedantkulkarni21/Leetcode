class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int l=0,r=0;
        int sum=0,mini=INT_MAX;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum >= k)
            {
                mini = min(mini, r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return mini==INT_MAX ? 0 : mini ;
    }
};