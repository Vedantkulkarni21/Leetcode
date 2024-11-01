class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char i:s)
        {
            if(isdigit(i))
                str+=i;
            if(isalpha(i))
                str+= tolower(i);
        }
        int l=0,r=str.size()-1;
        while(l<=r)
        {
            if(str[l]!=str[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};