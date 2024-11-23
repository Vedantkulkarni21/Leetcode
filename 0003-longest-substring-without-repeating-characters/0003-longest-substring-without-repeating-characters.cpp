class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxi=0;
        map<char,int>mpp;
        while(r<s.size())
        {
            mpp[s[r]]++;
            while(mpp[s[r]] > 1)
            {
                mpp[s[l]]--;
                l++;
            }
            maxi = max(maxi, r-l+1);
            r++;
        }
        return maxi;
    }
};