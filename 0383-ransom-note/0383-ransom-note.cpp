class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size() < ransomNote.size())
            return false;
        map<char,int>mpp1,mpp2;
        for(int i=0;i<magazine.size();i++)
        {
            if(i<ransomNote.size())
                mpp1[ransomNote[i]]++;
            mpp2[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            if(mpp1[ransomNote[i]] > mpp2[ransomNote[i]])
                return false;
        }
        return true;
    }
};