class Solution {
public:
    bool isValid(string s) {
        
        stack <char> sta;
        int len = s.length();

        for(int i=0;i<len;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                sta.push(s[i]);
            }
            else if(s[i]==')'||s[i]=='}'||s[i]==']')
            {
                if(sta.empty())
                {
                    return false;
                }
                else if(s[i]==')' && sta.top()!='(')
                {
                    return false;
                }
                 else if(s[i]=='}' && sta.top()!='{')
                {
                    return false;
                }
                 else if(s[i]==']' && sta.top()!='[')
                {
                    return false;
                }
                else
                {
                    sta.pop();
                }
            }

        }
        if(sta.empty())
        {return true;}
        else
        {return false;}
    }
};