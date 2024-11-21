class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() < 10)
            return {};
        vector<string>vec;
        unordered_map<string,int>mpp;
        int l=0,r=9;
        while(r<s.size())
        {
            string str = s.substr(l, r-l+1);
            mpp[str]++;
            l++;
            r++;
        }
        for(auto it:mpp)
        {
            if(it.second > 1)
            {
                vec.push_back(it.first);
            }
        }
        return vec;

    }
};