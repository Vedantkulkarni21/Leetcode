class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j=0,k=1;;
        vector<int>vec(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > 0)
            {
                vec[j] = nums[i];
                j+=2;
            }
            if(nums[i] < 0)
            {
                vec[k] = nums[i];
                k+=2;
            }
        }
        return vec;
    }
};