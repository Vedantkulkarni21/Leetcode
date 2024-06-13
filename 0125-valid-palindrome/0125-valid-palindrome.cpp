class Solution {
public:
    bool isPalindrome(string s) {
        //if(s.size() == 1 && s[i])
        int l=0,r=s.size()-1;
        while(l<r)
        {
            while(l<r && !isalpha(s[l]) && !isdigit(s[l]))
            {
                l++;
                continue;
            }
            while(l<r && !isalpha(s[r]) && !isdigit(s[r]))
            {
                r--;
                continue;
            }
            if(tolower(s[l])!=tolower(s[r]))
                return false;
            else
            {
                l++;
                r--;
            }
        }
        return true;
    }
};