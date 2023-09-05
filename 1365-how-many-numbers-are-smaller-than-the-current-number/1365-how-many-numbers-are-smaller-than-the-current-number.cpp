class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> mpp;
        vector<int>copy(nums);
        sort(copy.begin(),copy.end());
        for(int i=nums.size()-1;i>=0;i--)
        {
            mpp[copy[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=mpp[nums[i]];
        }
        return nums;
    }
};