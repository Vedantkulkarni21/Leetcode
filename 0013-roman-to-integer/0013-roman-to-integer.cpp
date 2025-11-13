class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mpp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int num = 0;
        for(int j=0; j<s.size(); j++)
        {
            if(mpp[s[j]] < mpp[s[j+1]])
            {
                num+=mpp[s[j+1]] - mpp[s[j]];
                j++;
            }
            else
            {
                num+=mpp[s[j]];
            }
        }
        return num;
    }
};