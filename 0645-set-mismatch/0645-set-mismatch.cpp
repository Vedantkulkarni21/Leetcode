class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans(nums.size()+1, 0), a;
        for(auto it:nums)
        {
            ans[it]++;
        }
        for(int i=1;i<ans.size(); i++)
        {
            if(ans[i] == 2)
            {
                a.push_back(i);
            }
        }
        for(int i=1;i<ans.size(); i++)
        {
            if(ans[i] == 0)
            {
                a.push_back(i);
            }
        }
        return a;
    }
};