class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mpp1;
        for(int i=0;i<ransomNote.size();i++)
        {
            mpp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++)
        {
            mpp1[magazine[i]]--;
        }
        for(auto it:mpp1)
        {
            if(it.second > 0)
            return false;
        }
        return true;
    }
};