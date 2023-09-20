class Solution {
public:
    int myAtoi(string s) {
        int i=0, sign=1,add=0,sub=0;
        long num=0;
        while(s[i]==' ')
        {
            if(s[i]!=' ')
            {break;}
            i++;
        }
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
        // if(add==sub && sub!=0)
        // {
        //     sign= 0;
        // }
        // else if(sub>add)
        // {
        //     sign= -1;
        // }
        // else if((sub==0 && add==0) || (add>sub))
        // {
        //     sign= 1;
        // }
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
    //     string str="";
    //    int sign,minus=0,plus=0;
    //     int ans;
    //     for(int i=0;i<s.size();i++)
    //     {
    //         // if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]=='.' || (s[i]=='+' || s[i] =='-' && s[i+1]==' '))
    //         // {
    //         //     break;
    //         // }
    //         while(s[i] == ' '){ // skipping space characters at the beginning
    //         i++;
    //     }
    //         if(isdigit(s[i]))
    //         {
    //             str=str+s[i];
    //             if(isdigit(s[i+1]))
    //             {
    //             }
    //             else{break;}
    //         }

    //         if(s[i]=='-' && (s[i+1]=='-' || s[i+1]=='+' || isdigit(s[i+1])))
    //         {
    //             if(s[i+1]==' ')
    //             {return 0;}
    //             minus++;
    //         }
    //         else if(s[i]=='+' && (s[i+1]=='-' || s[i+1]=='+' || isdigit(s[i+1])))
    //         {
    //             if(s[i+1]==' ')
    //             {return 0;}
    //             plus++;
    //         }
    //     }
        
    //     long num=0;
    //     if(plus==0 && minus==0)
    //     {
    //         sign =1;
    //     }
    //     else if((plus!=0 && minus!=0) && plus==minus){
    //         sign=0;
    //     }
    //     else if(minus>plus){
    //         sign=-1;
    //     }
    //     else if(plus>minus)
    //     {
    //         sign=1;
    //     }
    //     int maxi=INT_MAX;
    //     int mini=INT_MIN;
    //     for(int i=0;i<str.size();i++)
    //     {
    //        num=num*10+(str[i]-'0');
    //         if(num*sign>INT_MAX)
    //         {
    //             return maxi;
    //         }
    //         if(num*sign<INT_MIN)
    //         {
    //             return mini;
    //         }
    //     }

    //     return num*sign;