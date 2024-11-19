class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int l=0,r=0,sum=0,count=0;
        // while(r<nums.size())
        // {
        //     sum+=nums[r];
        //     if(sum > k)
        //     {
        //         sum-=nums[l];
        //         l++;
        //     }
        //     else if(sum == k)
        //     {
        //         count++;
        //     }
            
        //     r++;
        // }
        // return count;


        // int count=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         sum+=nums[j];
        //         if(sum==k)
        //             count++;
        //     }
        // }
        // return count;

        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            count+=mpp[sum-k];
            mpp[sum]++;
        }
        return count;
    }
};