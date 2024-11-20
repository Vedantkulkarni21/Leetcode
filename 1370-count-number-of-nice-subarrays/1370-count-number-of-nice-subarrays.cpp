class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
                sum+=1;
            mpp[sum]++;
            count+=mpp[sum-k];
        }
        return count;
    }
};