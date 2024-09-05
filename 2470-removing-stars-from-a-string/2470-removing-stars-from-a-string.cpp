class Solution {
public:
    string removeStars(string s) {
        stack<char>sta;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '*')
            {
                sta.pop();
            }
            else
            {
                sta.push(s[i]);
            }
        }
        s = "";
        while(!sta.empty())
        {
            s+=sta.top();
            sta.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};