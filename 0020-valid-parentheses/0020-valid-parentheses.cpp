class Solution {
public:
    bool isValid(string s) {
        stack<char>sta;
        for(auto ch:s)
        {
            if(sta.empty() && (ch == ')'|| ch == '}' || ch == ']'))
                return false;
            else if(ch == '(' || ch == '{' || ch == '[')
                sta.push(ch);
            else if(ch == ')' && sta.top() == '(')
                sta.pop();
            else if(ch == '}' && sta.top() == '{')
                sta.pop();
            else if(ch == ']' && sta.top() == '[')
                sta.pop();
            else 
                return false;
        }
        if(sta.empty())
            return true;
        return false;
    }
};