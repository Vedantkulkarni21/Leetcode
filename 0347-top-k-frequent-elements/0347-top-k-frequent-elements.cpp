class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(int it:nums)
        {
            mpp[it]++;   
        }
        vector<pair<int,int>>vec;
        for(auto it:mpp)
        {
            pair<int,int>p;
            p.first = it.second;
            p.second = it.first;
            vec.push_back(p);
        }
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(int i=vec.size()-1;i>=0 && k>0;i--, k--)
        {
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};