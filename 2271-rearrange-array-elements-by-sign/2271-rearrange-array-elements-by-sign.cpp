class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j=0;
        vector<int>vec(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > 0)
            {
                vec[j] = nums[i];
                j+=2;
            }
        }
        j=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] < 0)
            {
                vec[j] = nums[i];
                j+=2;
            }
        }
        return vec;
    }
};