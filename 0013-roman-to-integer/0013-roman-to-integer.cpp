class Solution {
public:
    int romanToInt(string s) {
        int count=0;
        for(int j=0;j<s.size();j++)
        {
            switch(s[j])
            {
                case 'I':
                    if(s[j+1]=='V')
                    {
                        count+=4;
                        j++;
                    }
                    else if(s[j+1]=='X')
                    {
                        count+=9;
                        j++;
                    }
                    else
                    {
                        count+=1;
                    }
                    break;
                    
                case 'V':
                        count+=5;
                        break;
                    
                case 'X':
                    if(s[j+1]=='L')
                    {
                        count+=40;
                        j++;
                    }
                    else if(s[j+1]=='C')
                    {
                        count+=90;
                        j++;
                    }
                    else
                    {
                        count+=10;
                    }
                    break;
                    
                case 'L':
                        count+=50;
                        break;
                
                case 'C':
                    if(s[j+1]=='D')
                    {
                        count+=400;
                        j++;
                    }
                    else if(s[j+1]=='M')
                    {
                        count+=900;
                        j++;
                    }
                    else
                    {
                        count+=100;
                    }
                    break;
                
                case 'D':
                    count+=500;
                    break;
                
                case 'M':
                    count+=1000;
                    break;
            }
        }
        return count;
    }
};