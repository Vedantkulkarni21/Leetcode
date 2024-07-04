class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        map<char, int> mpp;
        int maxi = 0; // Initialize to 0 because the length cannot be negative
        while (r < s.size()) {
            mpp[s[r]]++;
            while (mpp[s[r]] > 1) {
                mpp[s[l]]--;
                l++;
            }
            maxi = max(maxi, r - l + 1);
            r++;
        }
        return maxi;
    }
};