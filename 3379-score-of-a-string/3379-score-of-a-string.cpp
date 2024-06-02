class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=s.size()-1;i>0 ; i--)
        {
            sum+=abs((s[i] - 0) - (s[i-1] - 0));
        }
        return sum;
    }
};