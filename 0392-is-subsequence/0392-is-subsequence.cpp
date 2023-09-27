class Solution {
public:
    bool isSubsequence(string s, string t) {
        string str="",st="";
        int i=0;
        for(char ch:t)
        {
            if(s[i]==ch)
            {
                str.push_back(ch);
                i++;
            }
        }
        //reverse(str.begin(),str.end());
        cout<<str;
        if(str==s)
        {
            return true;
        }
        return false;
    }
};