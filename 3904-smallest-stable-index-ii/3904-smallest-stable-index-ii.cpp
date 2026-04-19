class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> suffix_min(nums);
        for (int i = suffix_min.size()-2; i >= 0; i--) {
            suffix_min[i] = min(suffix_min[i], suffix_min[i+1]);
        }
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi)
                maxi = nums[i];

            if ((maxi - suffix_min[i]) <= k)
                return i;

        }
        return -1;
        }
    };