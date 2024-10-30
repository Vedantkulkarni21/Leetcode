class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            auto it = mpp.find(target-nums[i]);
            if(it != mpp.end())
            {
                vec.push_back(it->second);
                vec.push_back(i);
                break;
            }
            mpp[nums[i]]=i;
        }
            return vec;
    }
};