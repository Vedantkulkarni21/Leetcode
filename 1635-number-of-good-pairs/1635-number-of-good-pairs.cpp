class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        map<int, int>mpp;
        for(int i:nums)
        {
            mpp[i]++;
        }
        for(auto it:mpp)
        {
            count+=((it.second*(it.second-1))/2);
        }
        return count;
    }
};
        // int count=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]==nums[j])
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;