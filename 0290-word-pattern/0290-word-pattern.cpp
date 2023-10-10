class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mpp1;
        map<string,char>mpp2;
        string st="";
        vector<string>ans;
        for(char ch:s)
        {
            if(ch==' ')
            {
                ans.push_back(st);
                st="";
            }
            else
            {
                st+=ch;
            }
        }
        ans.push_back(st);
        
        if(ans.size()!=pattern.size())
        {
            return false;
        }

        for(int i=0;i<pattern.size();i++)
        {
            mpp1[pattern[i]]=ans[i];
            mpp2[ans[i]]=pattern[i];
        }

        for(int i=0;i<pattern.size();i++)
        {
            if(mpp2[ans[i]] != pattern[i] || mpp1[pattern[i]] != ans[i])
            {
                return false;
            }
        }
        // for(char ch:pattern)
        // {
        //     mpp[ch]="";
        // }

        // int count=0;
        // for(auto it:mpp)
        // {
        //     if(it.second=="" || it.second==ans[count])
        //     {
        //         it.second=ans[count++];
        //     }
        //     else if(it.second!=ans[count])
        //     {
        //         return false;
        //     }
        // }

        return true;
    }
};