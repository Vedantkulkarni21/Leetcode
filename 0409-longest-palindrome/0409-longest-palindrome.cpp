class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mpp;
        int count = 0,maxi = 0;
        for(char it:s)
        {
            mpp[it]++;
        }
        for(auto it:mpp)
        {
            if(it.second % 2 == 0)
                count+=it.second;
            if(it.second % 2 == 1)
            {
                count+=(it.second-1);
                maxi++;;
            }
        }
        if(maxi==0)
        return count;
        else 
        return count+1;
    }
};