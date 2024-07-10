class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int r=0;
        int sum=0,maxi = INT_MIN;
        
        while(r<nums.size())
        {
            sum+=nums[r];
            maxi = max(sum, maxi);
            if(sum < 0)
                sum = 0;
            r++;
        }
        return maxi;
    }
};