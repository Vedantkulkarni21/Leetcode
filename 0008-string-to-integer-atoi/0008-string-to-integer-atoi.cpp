class Solution {
public:
    int myAtoi(string s) {
        int flag=1,num=0,i=0;
        while(i<s.size())
        {
            while(i<s.size() && s[i] == ' ')
            {
                i++;
            }
            if(s[i] == '-')
            {
                flag = -1;
                i++;
            }
            else if(s[i]== '+')
            {
                flag = 1;
                i++;
            }
            while(i<s.size() && isdigit(s[i]))
            {
                if(num > (INT_MAX - (s[i]-'0'))/10)
                    return (flag == 1)? INT_MAX : INT_MIN;
                num = num*10+(s[i]-'0');
                i++;
            }
            if(!isdigit(s[i]))
                break;
        }
        return flag*num;
    }
};