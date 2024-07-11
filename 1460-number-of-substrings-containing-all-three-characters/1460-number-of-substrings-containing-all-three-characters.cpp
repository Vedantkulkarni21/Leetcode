class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = 0, r = 0, count = 0;
        map<char, int> mpp;

        for(;r<s.size();r++)
        {
            mpp[s[r]]++;
            while(mpp['a'] > 0 && mpp['b'] > 0 && mpp['c'] > 0)
            {
                count+=s.size()-r;
                mpp[s[l]]--;
                l++;
            }
        }
        return count;
    }
};
