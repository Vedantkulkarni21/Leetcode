class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s;
        if(str1+str2 == str2+str1)
        {
            int gcd = __gcd(str1.size(),str2.size());
            s = str1.substr(0,gcd);
        }
        return s;
    }
};