class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mpp,mpp1;
        for(int i=0;i<s.size();i++)
        {
            if(mpp.count(s[i]) && mpp[s[i]] != t[i])
            {
                return false;
            }
            if(mpp1.count(t[i]) && mpp1[t[i]] != s[i])
            {
                return false;
            }
            mpp1[t[i]] = s[i];
            mpp[s[i]] = t[i];
        }
        return true;
    }
};