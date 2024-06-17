class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                c++;
            }
        }
        if(nums.size() == c)
            return;

        for(int i=0, j=0;i<nums.size();i++)
        {
            while(i<nums.size()-1 && nums[i]==0)
                i++;
            nums[j++] = nums[i]; 
        }
        for(int i=nums.size()-c;i<nums.size();i++)
            nums[i] = 0;
    }
};