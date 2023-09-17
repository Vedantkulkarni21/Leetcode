class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int temp;
        vector<int>leftsum(nums.size(),0),rightsum(nums.size(),0),ans;
        for(int i=1;i<nums.size();i++)
        {
            leftsum[i]=nums[i-1]+leftsum[i-1];
        }
        cout<<endl;
        for(int i=nums.size()-1;i>0;i--)
        {
            rightsum[i-1]=nums[i]+rightsum[i];
            cout<<rightsum[i-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(abs(rightsum[i]-leftsum[i]));
        }
        return ans;
    }
};