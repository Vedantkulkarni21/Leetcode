class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mpp;
        for(auto x:strs)
        {
            string copy=x;
            sort(copy.begin(),copy.end());
            mpp[copy].push_back(x);
        }
        vector<vector<string>>st;
        for(auto it:mpp)
        {
            st.push_back(it.second);
        }
        return st;
    }
};