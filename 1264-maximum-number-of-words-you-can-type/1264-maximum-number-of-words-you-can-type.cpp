class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0,sp=1;
        for(auto it:text)
        {
            if(it == ' ')
                sp++;
        }
        for(int i=0;i<text.size();i++)
        {
            if(find(brokenLetters.begin(),brokenLetters.end(),text[i]) != brokenLetters.end())
            {
                count++;
                while(i<text.size() && text[i]!=' ')
                    i++;
            }
        }
        return sp-count;           
    }
};