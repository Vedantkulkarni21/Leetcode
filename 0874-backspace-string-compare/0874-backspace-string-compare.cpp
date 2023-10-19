class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string copy1,copy2;
        for(char ch:s)
        {
            if(copy1.size()==0 && ch=='#')
            {
                continue;
            }
            else if(ch=='#')
            {
                copy1.pop_back();
            }
            else if(ch!='#')
            {
                copy1.push_back(ch);
            }
        }

        for(char ch:t)
        {
            if(copy2.size()==0 && ch=='#')
            {
                continue;
            }
            else if(ch=='#')
            {
                copy2.pop_back();
            }
            else if(ch!='#')
            {
                copy2.push_back(ch);
                cout<<ch;
            }
        }

        if(copy1!=copy2)
        return false;

        return true;
        // stack<char>sta,sta1;
        // string copy1,copy2;
        // for(char ch:s)
        // {
        //     if(sta.empty() && ch=='#')
        //     {
        //         continue;
        //     }
        //     else if(ch=='#')
        //     {
        //         sta.pop();
        //     }
        //     else if(ch != '#')
        //     {
        //         sta.push(ch);
        //     }
        // }
        // for(char ch:t)
        // {
        //     if(sta1.empty() && ch=='#')
        //     {
        //         continue;
        //     }
        //     else if(ch=='#')
        //     {
        //         sta1.pop();
        //     }
        //     else if(ch != '#')
        //     {
        //         sta1.push(ch);
        //     }
        // }
        // while(!sta.empty())
        // {
        //     copy1+=sta.top();
        //     sta.pop();
        // }
        // while(!sta1.empty())
        // {
        //     copy2+=sta1.top();
        //     sta1.pop();
        // }
        // if(copy1==copy2)
        // {
        //     return true;
        // }
        // return false;
    }
};