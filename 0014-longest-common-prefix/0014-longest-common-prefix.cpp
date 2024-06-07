class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string str;
    int min=1000,count=0;
    for(int i=0;i<strs.size();i++)
    {
        int len=strs[i].length();
        if(len<min)
        {
            min=len;
            str=strs[i];
        }
    }
    string ans="";
    vector<string>arr;
    for(int j=0;j<min;j++)
    {
        for(int k=0;k<strs.size();k++)
        {
            
            if(str[j]!=strs[k][j])
            {
                return ans;
            }
        }
        ans+=str[j];
        
    }
        return ans;
   
    }
};