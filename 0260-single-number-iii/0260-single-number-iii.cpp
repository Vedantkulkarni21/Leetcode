class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i:nums)
        {
            mpp[i]++;
        }
        for(auto i:mpp)
        {
            if(i.second==1)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};