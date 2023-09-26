class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i=0;i<=haystack.size()-needle.size() && haystack.size()>=needle.size();i++)
        {
            int j=0,count=0;
                while(haystack[i+j]==needle[j] && j<needle.size())
                {
                    j++;
                    count++;
                }
                if(count==needle.size())
               {
                   return i;
               }
        }
        return -1;
    }
};