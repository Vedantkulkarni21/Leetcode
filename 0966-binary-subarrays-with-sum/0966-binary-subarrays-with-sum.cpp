
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
    
private:
    int atMost(vector<int>& nums, int S) {
        if (S < 0) return 0;
        
        int l = 0, sum = 0, count = 0;
        
        for (int r = 0; r < nums.size(); ++r) {
            sum += nums[r];
            
            while (sum > S) {
                sum -= nums[l];
                ++l;
            }
            
            count += r - l + 1; // All subarrays ending at `r` with sum <= S
        }
        
        return count;
    }
};
