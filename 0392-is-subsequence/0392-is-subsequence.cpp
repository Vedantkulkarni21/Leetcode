class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0,r=0;
        while(l<s.size() && r<t.size())
        {
            if(t[r] == s[l])
            {
                l++;
            }
            r++;
        }
        return (l == s.size())?true:false;
    }
};