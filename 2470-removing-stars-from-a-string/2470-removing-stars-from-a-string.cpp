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
        string str="";
        while(!sta.empty())
        {
            str+=sta.top();
            sta.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};