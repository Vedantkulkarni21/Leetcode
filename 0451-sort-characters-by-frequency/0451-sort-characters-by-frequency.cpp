class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp1;
        vector<pair<int,char>>vec;
        string str;
        for(char ch:s)
        {
            mpp1[ch]++;
        }

        for(auto it:mpp1)
        {
            vec.push_back({it.second, it.first});
        }
        sort(vec.rbegin(),vec.rend());
        for(auto it:vec)
        {
            for(int i=0;i<it.first;i++)
            {
                str.push_back(it.second);
            }
        }
        // reverse(str.begin(),str.end());
        return str;
    }
};