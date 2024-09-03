class Solution {
public:
    string decodeString(string s) {
        stack<char>sta;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {
                sta.push(s[i]);
            }
            else
            {
                string str="";
                while(sta.top()!='[')
                {
                    str += sta.top();
                    sta.pop();
                }
                sta.pop();
                reverse(str.begin(), str.end());
                string str2 = "";
                while(!sta.empty() && isdigit(sta.top()))
                {
                    str2 += sta.top();
                    sta.pop();
                }
                reverse(str2.begin(), str2.end());
                int repeat = stoi(str2);
                for(int j=0;j<repeat;j++)
                {
                    for(char it:str)
                    {
                        sta.push(it);
                    }
                }
            }
        }
        string ans = "";
        while(!sta.empty())
        {
            ans+=sta.top();
            sta.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};