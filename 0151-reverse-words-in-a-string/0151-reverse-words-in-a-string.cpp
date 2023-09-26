class Solution {
public:
    string reverseWords(string s) {
    int i=s.size()-1,j;
    string str;
    while(i>=0)
    {
        while(i>=0 && s[i]==' ')
        {
            i--;
        }
        j=i;
        while(i>=0 && s[i]!=' ')
        {
            i--;
        }
        int start=i+1;
        int end=j;
        while(start<=end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
    
    for(int i = s.size()-1; i >= 0 ;)
    {
        
        if(s[i]==' ' && s[i+1]==' ')
        {
            i--;
        }
        else{
            str.push_back(s[i]);
            i--;
        }
    }
    if(str[0]==' ')
        str.erase(str.begin(),str.begin()+1);
    if(str[str.size()-1]==' ')
        str.pop_back();
    
    return str;
    }
};