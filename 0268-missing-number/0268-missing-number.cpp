class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int maxi;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
                maxi = nums[i];
        }
        for(int i=0;i<maxi;i++)
        {
            if(find(nums.begin(),nums.end(),i) == nums.end())
                return i;
        }
        return maxi+1;
    }
};