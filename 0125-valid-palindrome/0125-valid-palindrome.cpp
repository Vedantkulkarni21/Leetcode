class Solution {
public:
    bool isPalindrome(string s) {
        string ans,temp;
        for(int i=0;i<s.size();i++)
        {
            if( isdigit(s[i]) )
                temp+=s[i];   
            else if( isalpha(s[i]) )
                temp+=tolower(s[i]);
        }
        ans = temp;
        reverse(temp.begin(),temp.end());
        return (temp == ans);
    }
};