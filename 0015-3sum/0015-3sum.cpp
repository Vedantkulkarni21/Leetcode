class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=0,l,r;
        vector<vector<int>>ans;
        while(n<nums.size()-2)
        {
            if (n > 0 && nums[n] == nums[n - 1]) {
                ++n;
                continue;
            }
            l=n+1;
            r = nums.size()-1;
            while(l<r)
            {
                int sum = nums[n]+nums[l]+nums[r];
                if(sum == 0)
                {
                    vector<int>vec={nums[n], nums[l], nums[r]};
                    ans.push_back(vec);
                    while (l < r && nums[l] == nums[l + 1]) ++l;
                    while (l < r && nums[r] == nums[r - 1]) --r;
                    ++l;
                    --r;
                }
                else if(sum > 0)
                {
                    r--;
                }
                else if(sum < 0)
                {
                    l++;
                }
            }
            n++;
        }
        return ans;
    }
};