class Solution {
public:
    string simplifyPath(string path) {
        stack<string>sta;
        int i=0;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='/')
            {
                continue;
            }
            string copy="";
            while(path[i]!='/' && i<path.size())
            {
                copy+=path[i];
                i++;
            }
            if(copy==".")
            {
                continue;
            }

            else if(copy=="..")
            {
                if(!sta.empty())
                {
                    sta.pop();
                }
            }
            else
            {
                sta.push(copy);
            }
        }
        string str="";
        while(!sta.empty())
        {
            str="/"+ sta.top() +str;
            sta.pop();
        }
        if(str.size()==0)
        {
            str.push_back('/');
        }
        return str;
    }
};