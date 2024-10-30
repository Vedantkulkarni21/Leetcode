class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>str(strs);
        for(int i=0;i<str.size();i++)
        {
            sort(str[i].begin(),str[i].end());
        }
        map<string,vector<string>>mpp;
        for(int i=0;i<str.size();i++)
        {
            mpp[str[i]].push_back(strs[i]);
        }
        vector<vector<string>>vec;
        for(auto it:mpp)
        {
            vec.push_back(it.second);
        }
        return vec;
    }
};