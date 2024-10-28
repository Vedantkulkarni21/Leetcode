class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mpp;
        map<string,char>mpp2;
        int l = 0, r = 0;
        s+=' ';
        string str = "";
        for(int i=0;i<pattern.size();i++)
        {
            
            while(r<s.size())
            {
                if(s[r] == ' ')
                {
                    str = s.substr(l,r-l);
                    l = r+1;
                    r++;
                    cout<<str<<endl;
                    break;
                }
                r++;
            }

            if(str == "")
                return false;

            if(mpp[pattern[i]] != "" && mpp[pattern[i]] != str)
                return false;
            if(mpp2.count(str) && mpp2[str] != pattern[i])
                return false;

            mpp[pattern[i]] = str;
            mpp2[str] = pattern[i];
        }
        if (l < s.size()) return false;
        return true;
    }
};