class Solution {
public:
    int myAtoi(string s) {
        int i=0, sign=1,add=0,sub=0;
        long num=0;
        //skip the white spces
        while(s[i]==' ')
        {
            if(s[i]!=' ')
            {break;}
            i++;
        }
        //count the + and - in string
        while(s[i]=='+' || s[i]=='-')
        {
            if(s[i]=='+')
            {
                add++;
            }
            if(s[i]=='-')
            {
                sub++;
            }
            i++;
        }
        //check if count of +/- is more than 1 then answer is zero
        if((add+sub)>1)
        {
            sign=0;
        }
        else if(sub==1)
        {
            sign=-1;
        }

        
        int maxi=INT_MAX;
        int mini=INT_MIN;
        while(isdigit(s[i]))
        {
            num=num*10+(s[i]-'0');
            if(num*sign>INT_MAX)
            {
                return maxi;
            }
            if(num*sign<INT_MIN)
            {
                return mini;
            }
            if(!isdigit(s[i+1]))
            {
                return num*sign;
            }
            i++;
        }
        return num*sign;
    }
};