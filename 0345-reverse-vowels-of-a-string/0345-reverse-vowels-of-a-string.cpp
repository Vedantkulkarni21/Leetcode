class Solution {
public:
    string reverseVowels(string s) {
        stack<char>sta;
        for(char it:s)
        {
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u' || it=='A' || it=='E' || it=='I' || it=='O' || it=='U')
            {
                sta.push(it);
            }
        }
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s[i] = sta.top();
                sta.pop();
            }
        }
        return s;
    }
};