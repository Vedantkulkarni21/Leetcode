class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int l=0,r=0;
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            if(r-l > k)
            {
                mpp[nums[l]]--;
                l++;
            }
            if(mpp[nums[r]]>1)
                return true;
            r++;
        }
        return false;
    }
};