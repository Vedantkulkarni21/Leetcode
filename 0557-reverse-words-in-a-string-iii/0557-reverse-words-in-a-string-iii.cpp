class Solution {
public:
    string reverseWords(string s) {
        int left=0,right=0;
        while(right<=s.size())
        {
            if(s[right]==' ' || right==s.size())
            {
                reverse(s.begin()+left,s.begin()+right);
                left=right+1;
            }
            right++;
        }
        return s;
    }
};
