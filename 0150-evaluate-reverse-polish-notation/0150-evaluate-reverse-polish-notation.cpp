class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>sta1;

        int ans,i=0;
        while(i<tokens.size())
        {
            if(tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="+" || tokens[i]=="-")
            {
                int temp=0;
                int left=stoi(sta1.top()); 
                sta1.pop();
                int right=stoi(sta1.top());
                sta1.pop();

                if(tokens[i]=="*")
                {
                    temp=left*right;
                }
                else if(tokens[i]=="/")
                {
                    temp=right/left;
                }
                else if(tokens[i]=="+")
                {
                    temp=left+right;
                }
                else{
                    temp=right-left;
                }
                sta1.push(to_string(temp));
            }
            else
            {
                sta1.push(tokens[i]);
            }
            i++;
        }
        
        ans=stoi(sta1.top());
        return ans;
    }
};