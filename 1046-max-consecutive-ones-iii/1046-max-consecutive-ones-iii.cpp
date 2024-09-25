class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0, z_count=0, maxi=0;
        while(r<nums.size())
        {
            if(nums[r]==0)
            {
                z_count++;
            }
            while(z_count > k)
            {
                if(nums[l]==0)
                    z_count--;
                l++;
            }
            maxi = max(maxi, r-l+1);
            r++;
        }
        return maxi;
    }
};