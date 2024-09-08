class Solution {
public:
    string reverseWords(string s) {
        stack<string>sta;
        for(int i=0;i<s.size();i++)
        {
            string str="";
            while(i<s.size() && s[i]!=' ')
            {
                str+=s[i++];
            }
            if(!str.empty())
            {
                sta.push(str);
                sta.push(" ");
            }
        }
        sta.pop();
        s="";
        while(!sta.empty())
        {
            s+=sta.top();
            sta.pop();
        }
        return s;
    }
};