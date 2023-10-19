class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>sta,sta1;
        string copy1,copy2;
        for(char ch:s)
        {
            if(sta.empty() && ch=='#')
            {
                continue;
            }
            else if(ch=='#')
            {
                sta.pop();
            }
            else if(ch != '#')
            {
                sta.push(ch);
            }
        }
        for(char ch:t)
        {
            if(sta1.empty() && ch=='#')
            {
                continue;
            }
            else if(ch=='#')
            {
                sta1.pop();
            }
            else if(ch != '#')
            {
                sta1.push(ch);
            }
        }
        while(!sta.empty())
        {
            copy1+=sta.top();
            sta.pop();
        }
        while(!sta1.empty())
        {
            copy2+=sta1.top();
            sta1.pop();
        }
        if(copy1==copy2)
        {
            return true;
        }
        return false;
    }
};