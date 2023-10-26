class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
        return false;
        unordered_map<char, int>mpp;
        unordered_map<char, int>mpp2;
        
        for(int i=0;i<s.size();i++)
        {
            if(mpp[s[i]] && mpp[s[i]] != t[i])
            return false;
            if(mpp2[t[i]] && mpp2[t[i]] != s[i])
            return false;
            mpp[s[i]] = t[i];
            mpp2[t[i]] = s[i];
        }
        return true;
    }
};