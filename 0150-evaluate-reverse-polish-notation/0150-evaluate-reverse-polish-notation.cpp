class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>sta1;
        int i=0;
        while(i<tokens.size())
        {
            if(tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="+" || tokens[i]=="-")
            {
                int temp=0;
                int left=sta1.top(); 
                sta1.pop();
                int right=sta1.top();
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
                sta1.push(temp);
            }
            else
            {
                sta1.push(stoi(tokens[i]));
            }
            i++;
        }
        return sta1.top();
    }
};