class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>vec(26,0);
        int l=0,r=0,maxi=0,count=0,maxfreq=0,changes=0;
        while(r<s.size())
        {
            vec[s[r] - 'A']++;
            maxfreq = max(maxfreq, vec[s[r] - 'A']);
            
            while((r-l+1) - maxfreq > k)
            {
                vec[s[l] - 'A']--;
                maxfreq= *max_element(vec.begin(),vec.end());
                l++;
            }
            
            changes = (r-l+1) - maxfreq;
            maxi = max(r-l+1 , maxi);
            r++;
        }
        return maxi;
    }
};