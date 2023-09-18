class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int rev=0,rem=0,num,count=0;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {   num=nums[i];
            rev=0;
            while(num!=0){
                rem=num%10;
                rev=rev*10+rem;
                num=num/10;
            }
            mpp[nums[i]]++;
            mpp[rev]++;
        }
        for(auto it:mpp)
        {
            if(it.second>0)
            {
                count++;
            }
        }
        return count;
    }
};