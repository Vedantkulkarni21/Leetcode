class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int end=0;
        int i=0;
        while(i<s.size())
        {
            while(i<s.size() && s[i]!=' ')
            {
                i++;
            }
            end=i-1;
            reverse(s.begin()+start,s.begin()+end+1);
            start=i+1;
            i++;
        }
        return s;
    }
};