class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>target)
            {
                return i;
                break;
            }
            else if(nums[i]==target)
            {
                return i;
                break;
            }
            else if(i==nums.size()-1 && nums[i]!=target)
            {
                return i+1;
                break;
            }
        } 
        return 0;
    }
};