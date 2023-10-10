class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mpp1;
        map<string,char>mpp2;
        string st="";
        vector<string>ans;
        //create vector of string using s
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
        ans.push_back(st); //remained last element
        
        //size boundry condition
        if(ans.size()!=pattern.size())
        {
            return false;
        }

        //assign ids and values to maps
        for(int i=0;i<pattern.size();i++)
        {
            mpp1[pattern[i]]=ans[i];
            mpp2[ans[i]]=pattern[i];
        }

        //check the last condition
        for(int i=0;i<pattern.size();i++)
        {
            if(mpp2[ans[i]] != pattern[i] || mpp1[pattern[i]] != ans[i])
            {
                return false;
            }
        }
        return true;
    }
};