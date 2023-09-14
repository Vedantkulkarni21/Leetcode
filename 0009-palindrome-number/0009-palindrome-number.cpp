class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {return false;}
        int temp=x;
        long int rem=0,sum=0;
        while(x!=0)
        {
            rem=x%10;
             sum=sum*10+rem;
            x=x/10;
        }
        cout<<sum;
        if(sum==temp)
        {
            return true;
        }
        return false;
    }
};