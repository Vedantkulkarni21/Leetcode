class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num = nums[0];
        while(nums[0]%num != 0 || nums[nums.size()-1]%num != 0)
        {
            num--;
        }
        return num;
    }
};