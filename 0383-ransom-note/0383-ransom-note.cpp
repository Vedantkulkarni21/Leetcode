class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
         map<char,int> mag;
         int count=0;
         //count occurance of same elements in magazine 
         for(auto i:magazine)
         {
             mag[i]++;
         }
         //subtract
         for(auto i:ransomNote)
         {
             --mag[i];
             if(mag[i]<0)
             {
                 return false;
             }
         }
         return true;
    }
};
